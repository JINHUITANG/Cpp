/*****************************
*文件名：1.22.cpp
*创建人：tjh
*日期：2021.1.22
*描述：变量类型
******************************/
#include<iostream>
#include<iomanip>
using namespace std;
//宏定义 #define 变量  值  ---尽量不要用来定义符号常量

int main()
{
	const int a = 911;  

	cout << "int 类型变量a="
		 << a
		 << " int 类型占用" <<sizeof(a) << "个byte" << endl; 

	float tub = 10.0 / 3;    //区别10/3
	cout << "tub=" << tub;  //默认6位有效数字
	cout << " float 类型占用" << sizeof(float) << "个byte" << endl;

	double ee = 3.1415926e4;    //科学计数法
	cout << "double 类型变量ee=" << ee << endl;

	char ch = 'T';
	cout << "char 类型变量ch="
		<< ch
		<< " char 类型占用" << sizeof(char) << "个byte" << endl;
	cout << "char 类型变量ch的ASCII码为 " << (int)ch << endl;

	cin.get();

	return 0;
}
/*
cout<<fixed<<setprecision(3); ---设置小数点后位数
cout<<"|"<<setw(3)<<000<<"|"<<endl;----设置宽度
*/
