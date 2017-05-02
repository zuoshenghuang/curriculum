#pragma once
#include <string>
/*
	你用这个程序就好了 ！， 直接输入表达式
	返回值： 要么是结果，要么是报错信息
*/
std::string smartExpCalc(std::string exp);

/*
	一个表达式求值类
*/
class SmartExp
{
public:

	SmartExp(std::string s) : exp(s), errInfo("") {}
	
	//	计算结果，如果出错请调用 getErrorInfo查看
	
	double calculate();

	std::string  getErrorInfo() { return errInfo; }

private:

	std::string exp;
	std::string errInfo;
};
