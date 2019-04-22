#include <iostream>
using namespace std;
int main()
{
	int i = 42;		//定义一个名为i的int变量，值为42 
	int *p1 = &i;	//定义一个指针p1，存有i的地址 
	*p1 = *p1 * *p1;	//将p1所指对象的值的平方赋值给p1所指对象
						//即i=i*i
	cout<<i<<endl; 
	return 0;          
}
