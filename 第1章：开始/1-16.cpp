#include <iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	//读取数据直到遇到文件尾 
	while(cin>>value)
		sum+=value;
	cout<<"Sum="<<sum<<endl;  //输出读入数字的和
	return 0;          
}
