#include <iostream>
using namespace std;
int main()
{
	const int i=42;
	auto j=i;	//j的类型是int
	const auto &k=i;	//k的类型是const int& 
	auto *p=&i;	//p的类型是const int* 
	const auto j2=i,&k2=i;	
	//j2的类型是const int，k2的类型是const int *const
	return 0;          
}
