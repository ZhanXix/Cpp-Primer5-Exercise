#include <iostream>
using namespace std;
int main()
{
	int val=0,min=0,max=0;
	cout<<"输入两个整数："<<endl;
	cin>>min>>max;
	if(min>max){	
	//如果输入的数不是第一个小，第二个大
	//就需要对换 
		int temp=min;
		min=max;
		max=temp;
	} 
	val=min;
	while (val<=max){
		cout << val << endl; 
		++val;
	} //输出min到max之间的所有整数 
	return 0;          
}
