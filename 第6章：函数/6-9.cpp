#include <iostream>
#include "Chapter6.h"
using namespace std;

int main()
{
	cout << "输入一个数字：" << endl;
	int x;
	cin >> x;
	cout << x << "! = " << fact(x) << endl;
	return 0;
}
