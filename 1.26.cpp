/*****************************
*�ļ�����1.26.cpp
*�����ˣ�tjh
*���ڣ�2021.1.27
*������0~4294967295���ڵ�һ��ʮ���������Ľ���ת��
******************************/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned int intdec;   //��Ҫ���н���ת��������
	int jznum;    //������
	int loopnum;
	int yunum;
	
	cout << "������һ��0~4294967295���ڵ�һ��ʮ�������� " << endl;
	cin >> intdec;
	cout << "������Ҫת���Ľ���λ����2,8,16" << endl;
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
