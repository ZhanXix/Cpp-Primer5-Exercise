#include <iostream>
using namespace std;

int fact(int val)	//阶乘
{
	int ret = 1;
	for (; val > 0; --val)
		ret *= val;
	return ret;
}

int main()
{
	cout << "5！=" << fact(5) << endl;
	return 0;
}
