/*****************************
*�ļ�����1.22.cpp
*�����ˣ��ƽ��
*���ڣ�2021.1.22
*��������������
******************************/
#include<iostream>
#include<iomanip>
using namespace std;
//�궨�� #define ����  ֵ  ---������Ҫ����������ų���

int main()
{
	const int a = 911;  

	cout << "int ���ͱ���a="
		 << a
		 << " int ����ռ��" <<sizeof(a) << "��byte" << endl; 

	float tub = 10.0 / 3;    //����10/3
	cout << "tub=" << tub;  //Ĭ��6λ��Ч����
	cout << " float ����ռ��" << sizeof(float) << "��byte" << endl;

	double ee = 3.1415926e4;    //��ѧ������
	cout << "double ���ͱ���ee=" << ee << endl;

	char ch = 'T';
	cout << "char ���ͱ���ch="
		<< ch
		<< " char ����ռ��" << sizeof(char) << "��byte" << endl;
	cout << "char ���ͱ���ch��ASCII��Ϊ " << (int)ch << endl;

	cin.get();

	return 0;
}
/*
cout<<fixed<<setprecision(3); ---����С�����λ��
cout<<"|"<<setw(3)<<000<<"|"<<endl;----���ÿ��
*/
