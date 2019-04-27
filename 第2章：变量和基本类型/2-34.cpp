#include <iostream>
using namespace std;
int main()
{
	int i=0, &r=i;
	auto a=r;
	const int ci=i, &cr=ci;
	auto b=ci;
	auto c=cr;
	auto d=&i;
	auto e=&ci;
	auto &g=ci;
	a=42;	//合法。a是一个整数，被赋值为42 
	cout<<"a="<<a<<endl; 
	b=42;	//合法。b是一个整数，被赋值为42
	cout<<"b="<<b<<endl;
	c=42;	//合法。c是一个整数，被赋值为42
	cout<<"c="<<c<<endl;
	/*
	d=42;	//不合法。d是一个整型指针，不能赋值为整数 
	cout<<"d="<<d<<endl;
	e=42;	//不合法。e是一个指向整数常量的指针，不能赋值为整数 
	cout<<"e="<<e<<endl;
	g=42;	// 不合法。g是一个整型常量引用，不能改变其值
	cout<<"g="<<g<<endl;
	*/
	return 0;          
}
