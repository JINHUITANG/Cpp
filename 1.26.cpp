/*****************************
*�ļ�����1.26.cpp
*�����ˣ�tjh
*���ڣ�2021.1.21
*������0~255��ʮ����ת������
******************************/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int intdec;
	
	cout << "��������Ҫת�ɶ����Ƶ�һ�� 0~255 ֮������� " << endl;
	cin >> intdec;
	for (int i = 1; i < 9; i++)
	{
		
		if (intdec<1)
		{
			cout << 0;
		}
		else
		{
			cout << intdec % 2;   //��ʱ���ɵ�λ����λ���
		}
		intdec = intdec / 2;
	}

	cin.get();
	cin.get();
	return 0;
}
