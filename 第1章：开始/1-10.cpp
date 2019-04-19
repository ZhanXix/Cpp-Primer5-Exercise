#include <iostream>
using namespace std;
int main()
{
	int val=10;
	//只要val的值不小于0，while循环就会持续执行
	while (val>=0){
		cout << val << endl; 
		--val;
	} //输出10到0之间的所有整数 
	return 0;          
}
