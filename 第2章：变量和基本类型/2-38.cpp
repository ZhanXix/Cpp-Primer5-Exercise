#include <iostream>
using namespace std;
int main()
{
	int a=2,&b=a;
	auto x1=a;
	decltype(a) x2=a;	//x1、x2类型均为int
	auto y1=b;	//y1类型为int 
	decltype(b) y2=b;  //y2类型为int&
	return 0;
}
