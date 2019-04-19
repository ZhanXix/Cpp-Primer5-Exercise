#include <iostream>
using namespace std;
int main()
{
	cout<<"输入两个数字：";
	cout<<endl;
	int v1=0,v2=0;
	cin>>v1;
	cin>>v2;
	cout<<v1;		//重写上题程序 
	cout<<"和";		//将每个运算对象的打印操作放在一个语句中 
	cout<<v2;
	cout<<"的乘积是";
	cout<<v1*v2;
	cout<<endl;
	return 0; 
}
