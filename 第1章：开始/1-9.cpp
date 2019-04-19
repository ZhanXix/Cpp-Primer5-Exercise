#include <iostream>
using namespace std;
int main()
{
	int sum=0,val=50;
	//只要val的值不大于100，while循环就会持续执行
	while (val<=100){
		sum+=val;
		++val;
	} //得到50到100整数相加的结果 
	cout<<"Sum of 50 to 100 inclusive is "
		<<sum<<endl;     //结果为3825
	return 0;          
}
