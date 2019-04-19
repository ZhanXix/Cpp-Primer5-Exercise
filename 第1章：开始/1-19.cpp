//输入两个数，输出他们之间的所有整数
#include <iostream>
using namespace std;
int main()
{
	int high=0,low=0;
	cin >> high >>low;
	if(high<low){	//考虑输入的一个数比第二个数小的情况
		int temp=high;	//对换两个数字 
		high=low;
		low=temp;
	} 
	while (high>=low){
		cout << high << endl; 
		--high;
	} //输出high到low之间的所有整数 
	return 0;          
}
