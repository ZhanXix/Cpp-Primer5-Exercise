#include <iostream>
using namespace std;

size_t count_calls_add(int n)	//n是形参
{
	static size_t ctr = 0;    //ctr是局部静态变量
	ctr += n;
	return ctr;
}

int main()
{
	int i = 20;	//i是局部变量
	cout << count_calls_add(i) << endl;
	return 0;
}
