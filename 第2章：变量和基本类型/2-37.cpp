#include <iostream>
using namespace std;
int main()
{
	int a=3,b=4;	//a,b的类型都是int 
	decltype(a) c=a;	//c的类型是int
	decltype((a=b)) d=a;	//d的类型是int&
	cout<<"a="<<a<<endl; //a=3
	cout<<"b="<<b<<endl; //b=4
	cout<<"c="<<c<<endl; //c=3
	cout<<"d="<<d<<endl; //d=3
	return 0;          
}
