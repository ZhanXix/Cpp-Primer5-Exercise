#include <iostream>
using namespace std;
int main()
{
	int i=1;	
	int *pi=0;
	pi=&i;	//改变指针的值
	*pi=2;	//改变指针所指对象的值
	cout<<i<<endl; 
	return 0;          
}
