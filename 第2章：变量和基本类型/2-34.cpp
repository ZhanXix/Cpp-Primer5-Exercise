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
	a=42;	//合法。 
	cout<<"a="<<a<<endl; 
	b=42;	//合法。
	cout<<"b="<<b<<endl;
	c=42;	//合法。
	cout<<"c="<<c<<endl;
	/*上一题的推断正确
	d=42;	//[Error] invalid conversion from 'int' to 'int*' [-fpermissive]
	cout<<"d="<<d<<endl;
	e=42;	// [Error] invalid conversion from 'int' to 'const int*' [-fpermissive]
	cout<<"e="<<e<<endl;
	g=42;	// [Error] assignment of read-only reference 'g'	
	cout<<"g="<<g<<endl;
	*/
	return 0;          
}
