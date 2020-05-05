#include "stdafx.h"
#include<iostream>

using namespace std;
int sum = 0;
class chengji
{
public:
	chengji(int a = 0, int b = 0, int c = 0)//=======默认构造函数
	{
		win = a;
		los = b;
		tie = c;
	}
	void gshow();
	friend void bijiao(int a, int b);//=======要对私有成员进行处理，定义为友元函数
private:
	int win;
	int los;
	int tie;
}ni;
void chengji::gshow()
{
	cout << "游戏的总次数为: " << sum << endl;
	cout << "此时游戏结果为下:" << endl;
	cout << "=========|你|电脑|===" << endl;
	cout << "获胜的次数|" << this->win << "|"<<sum-win-tie<<" | "<<endl;
		cout << "战输的次数|" << this->los << "|"<<sum-los-tie<<" | "<<endl;
		cout << "====" << endl;
	cout << "平局的次数为: " << tie << endl;
}
void tishi()
{
	cout << "石头剪刀布游戏" << endl;
	cout << "在这个游戏中" << endl;
	cout << "c表示布" << endl;
	cout << "h表示石头" << endl;
	cout << "s表示剪刀" << endl;
	cout << "游戏者和机器都只选择c,h,s中的一个.如果二者的选择相同" << endl;
	cout << "那么这一局就是平局同时胜负规则为:" << endl;
	cout << "布和石头,则布获胜" << endl;
	cout << "石头和剪刀, 则石头获胜" << endl;
	cout << "剪刀和布， 则剪刀获胜 " << endl;
	cout << "在游戏中，请根据提示，键入关键字词然后以回车键确认" << endl;
	cout << "关键字词如下:" << endl;
	cout << "- g表示显示此时的游戏结果" << endl;
	cout << "- p表示获取游戏帮助" << endl;
	cout << "- i表示获取游戏知道信息" << endl;
	cout << "- q表示退出游戏程序" << endl;
}
void help()//帮助函数  p  字符的处理
{
	cout << "你可以输入以下字符" << endl;
	cout << "- c表示布" << endl;
	cout << "- h表示锤子" << endl;
	cout << "- s表示剪刀" << endl;
	cout << "- g查看游戏结果" << endl;
	cout << "- p字符输入帮助" << endl;
	cout << "- i重新打印出游戏指导信息" << endl;
	cout << "- q退出游戏程序" << endl;
}
int mach()// 计算电脑出值的函数
{
	static int i;
	i = ++i % 3;
	return((i == 0) ? 3 : ((i == 1) ? 1 : 2));
}
int select()//选择输入函数
{
	int sele;
	char x;
	cout << "请输入'c'布-'h'石尖-'s'剪刀-'g'結果-'p'幇助-'i'疑向-'q'退出" << endl;
	while (1)
	{
		cin >> x;
		if (x == 'c'|| x == 'h' || x == 's' || x == 'g' || x == 'p' || x == 'i' || x == 'q') {
			break;
		}
	};
	switch (x) {
	case'h':sele = 1; break;//1表示 石头
	case's':sele = 2; break;//2 表示 剪刀
	case'c':sele = 3; break;//3表示 布
	case'g':sele = 0; ni.gshow(); break;
	case'p':sele = 0; help(); break;
	case'i':sele = 0; tishi(); break;
	case'q':sele = 4; break;
	}
	return sele;
}
void bijiao(int a, int b)//形参a表示的是自己的选择，b表示的是电脑玩家的选择
{
	if (a == 1)
	{
		if (b == 1) {
			ni.tie++;
			cout << "你出 石头" << endl;
			cout << "电脑 石头" << endl;
			cout << " 此局为平局" << endl;
		}
		else if (b == 2) {
			ni.win++;
			cout << "你出 石头" << endl;
			cout << "电脑 剪刀" << endl;
			cout << "你赢啦!!!!!!" << endl;
		}
		else {
			ni.los++;
			cout << "你出 石头" << endl;
			cout << "电脑 布" << endl;
			cout << "很遗憾!!!!!" << endl;
		}
	}
	else if (a == 2)
	{
		if (b == 1) {
			ni.los++;
			cout << "你出剪刀" << endl;
			cout << "电脑 石头" << endl;
			cout << "你输了!!!!!" << endl;
		}
		else if (b == 2) {
			ni.tie++;
			cout << "你出剪刀" << endl;
			cout << "电脑剪刀" << endl;
			cout << "此局为平局" << endl;
		}
		else {
			ni.win++;
			cout << "你出 剪刀" << endl;
			cout << "电脑 布" << endl;
			cout << "你赢啦!!!!!" << endl;
		}
			}
		else
		{
			if (b == 1) {
				ni.win++;
				cout << "你出 布" << endl;
				cout << "电脑 石头" << endl;
				cout << "你贏啦!!!!!" << endl;
			}
			else if (b == 2) {
				ni.los++;
				cout << "你出 布" << endl;
				cout << "电脑 剪刀" << endl;
				cout << "很遗憾!!!!!" << endl;
			}
			else {
				ni.tie++;
				cout << "你出布" << endl;
				cout << "电脑布" << endl;
				cout << "此局为平局" << endl;
			}
		}
		}
		int main()
		{
			tishi();
			int nval = 0, dval = 0;
			while (1)
			{
				nval = select();
				if (nval == 4) break;
				if (nval != 0)
				{
					sum++;
					dval = mach();
					bijiao(nval, dval);
				}
			};
			return 0;
		}
