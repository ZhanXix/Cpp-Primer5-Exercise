#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	//只要val的值不大于100，for循环就会持续执行
	for (int val=50;val<=100;++val)
		sum+=val;
	//得到50到100整数相加的结果 
	cout<<"Sum of 50 to 100 inclusive is "
		<<sum<<endl;     //结果为3825
	return 0;          
}
