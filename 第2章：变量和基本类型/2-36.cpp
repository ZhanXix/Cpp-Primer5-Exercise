#include <iostream>
using namespace std;
int main()
{
	int a=3,b=4;	//a,b的类型都是int 
	decltype(a) c=a;	//c的类型是int
	decltype((b)) d=a;	//d的类型是int&
	++c;
	++d;
	cout<<"a="<<a<<endl; //a=4
	cout<<"b="<<b<<endl; //b=4
	cout<<"c="<<c<<endl; //c=4
	cout<<"d="<<d<<endl; //d=4
	return 0;          
}
