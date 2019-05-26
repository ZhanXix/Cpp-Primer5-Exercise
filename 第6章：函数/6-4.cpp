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
	cout << "输入一个数字：" << endl;
	int x;
	cin >> x;
	cout << x << "! = " << fact(x) << endl;
	return 0;
}
