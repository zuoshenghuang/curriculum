#include "SmartExp.hpp"

#include <stack>

char Precede(char a, char b) { //判断运算符优先级

	int i, j;

	char Table[8][8] = {

		{ ' ','+','-','*','/','(',')','=' },
		{ '+','>','>','<','<','<','>','>' },
		{ '-','>','>','<','<','<','>','>' },
		{ '*','>','>','>','>','<','>','>' },
		{ '/','>','>','>','>','<','>','>' },
		{ '(','<','<','<','<','<','=',' ' },
		{ ')','>','>','>','>',' ','>','>' },
		{ '=','<','<','<','<','<',' ','=' }

	};  //优先级表格

	for (i = 0; i<8; i++)

		if (Table[0][i] == a)  //寻找运算符a

			break;

	for (j = 0; j<8; j++) //寻找运算符b

		if (Table[j][0] == b)

			break;

	return Table[j][i];

}

bool Calcu_temp(double a, char theta, double b, double &r) { //计算二元表达式的值

	if (theta == '+')

		r = a + b;

	else if (theta == '-')

		r = a - b;

	else if (theta == '*')

		r = a * b;

	else {

		if (fabs(b - 0.0)<1e-8)  //如果除数为0，返回错误信息

			return false;

		else

			r = a / b;

	}
	return true;

}


bool IsOper(char ch) { //判断字符ch是否为运算符

	char ptr[10] = { '+', '-', '*', '/', '(', ')', '=' };

	int i;

	for (i = 0; i<7; i++) {

		if (ch == ptr[i])

			return true;
	}
	return false;
}

bool Calculate(const char *s, double &result) { //计算表达式的结果

	char theta;

	int i = 0, j, point = 0;
	double a, b, r, num = 0;
	std::stack<double> num_stack;  //数字栈
	std::stack<char> oper_stack;  //运算符栈
	oper_stack.push('=');

	while (s[i] != '=' || oper_stack.top() != '=') { //对表达式a进行计算

		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '.') { //字符是数字或者小数点

			num = 0;  //初始化数字为0

			point = 0;  //point用来标记是否出现小数点以及当前处于小数点后第x位，point==10^x

			if (s[i] == '.')
				point = 10;
			else
				num = s[i] - 48;

			j = i + 1;

			while (!IsOper(s[j])) { //继续往后查找并记录该数字，直到该数字结束遇到运算符为止

				if (s[j] == '.') {

					point = 10;

					j++;

					continue;

				}

				if (!point)  //整数部分

					num = num * 10 + (s[j] - 48);

				else {

					num = num + 1.0 * (s[j] - 48) / point;  //小数部分

					point *= 10;  //小数位数后移一位

				}

				j++;

			}

			i = j;

			num_stack.push(num);  //将该数字压入栈中

		}

		else if (IsOper(s[i])) { //字符是运算符

			switch (Precede(s[i], oper_stack.top())) { //该运算符和栈顶运算符进行优先级比较并做相关处理

			case '<':

				oper_stack.push(s[i++]);

				break;

			case '=':

				oper_stack.pop();

				i++;

				break;

			case '>':

				theta = oper_stack.top();  //从栈中弹出一个运算符进行计算

				oper_stack.pop();

				b = num_stack.top();  //弹出两个数字，注意顺序，先弹出的数是第二个操作数

				num_stack.pop();

				a = num_stack.top();

				num_stack.pop();

				if (Calcu_temp(a, theta, b, r))  //计算并判断是否有除数等于0的情况

					num_stack.push(r);  //若正常，则将结果压入栈中

				else

					return false;  //出现除数为0的情况，返回错误信息

				break;
			}
		}
	}

	result = num_stack.top();  //最后数字栈中的数即为表达式的最终结果

	return true;
}

bool isNumber(char c)
{
	return false;
}

bool Check(const char *s) { //检查表达式括号是否匹配

	int flag = 0, i;

	for (i = 0; s[i] != 0; i++) {

		if (s[i] == '(')

			flag++;

		if (s[i] == ')')

			flag--;

	}
	if (flag)
		return false;

	return true;
}


double SmartExp::calculate()
{
	double r = 0.0;

	std::string str = exp + "=";

	if (! Check(str.c_str()))
	{
		errInfo = "brackets are not match";
		return r;
	}

	if (! Calculate(str.c_str(), r))
		errInfo = "divided by 0";

	return r;
}

#include <sstream>
std::string double2string(double d)
{
	std::stringstream os;
	os << d;
	return os.str();
}

std::string smartExpCalc(std::string exp)
{
	double r = 0.0;

	std::string str = exp + "=";

	if (! Check(str.c_str()))
		return "brackets are not match";

	if (! Calculate(str.c_str(), r))
		return "divided by 0";

	return double2string(r);
}

const char * getExpCalc(const char * exp)
{
	std::string str = exp;
	std::string res = smartExpCalc(str);

	return res.c_str();
}