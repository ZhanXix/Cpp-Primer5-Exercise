#include <iostream>
using namespace std;
int main()
{
	int i=100,sum=0;
	for(int i=0;i!=10;++i)	//局部变量i覆盖了之前的定义 
		sum+=i;
	cout<<i<<" "<<sum<<endl;	//这里输出的是第一个i的值 
	return 0;          
}
