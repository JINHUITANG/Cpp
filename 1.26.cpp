/*****************************
*文件名：1.26.cpp
*创建人：tjh
*日期：2021.1.27
*描述：0~4294967295以内的一个十进制整数的进制转换
******************************/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned int intdec;   //需要进行进制转化的整数
	int jznum;    //进制数
	int loopnum;
	int yunum;
	
	cout << "请输入一个0~4294967295以内的一个十进制整数 " << endl;
	cin >> intdec;
	cout << "请输入要转化的进制位数如2,8,16" << endl;
	cin >> jznum;
	
	if (jznum == 16)
		loopnum = 8;

	if (jznum == 8)
		loopnum = 11;

	if (jznum == 2)
		loopnum = 32;

	for (int i = loopnum - 1; i >= 0; i--)
	{
		yunum = intdec / (int)pow(jznum, i) % jznum;

		if (yunum < 10)
			cout << yunum;
		else if (yunum == 10)
			cout.put('A');
		else if (yunum == 11)
			cout.put('B');
		else if (yunum == 12)
			cout.put('C');
		else if (yunum == 13)
			cout.put('D');
		else if (yunum == 14)
			cout.put('E');
		else cout.put('F');
	}
				
	cin.get();
	cin.get();
	return 0;
}
