/*****************************
*文件名：1.26.cpp
*创建人：tjh
*日期：2021.1.21
*描述：0~255的十进制转二进制
******************************/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int intdec;
	
	cout << "请输入需要转成二进制的一个 0~255 之间的整数 " << endl;
	cin >> intdec;
	for (int i = 1; i < 9; i++)
	{
		
		if (intdec<1)
		{
			cout << 0;
		}
		else
		{
			cout << intdec % 2;   //此时是由低位到高位输出
		}
		intdec = intdec / 2;
	}

	cin.get();
	cin.get();
	return 0;
}
