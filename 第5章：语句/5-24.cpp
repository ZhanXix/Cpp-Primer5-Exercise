#include <iostream>
using namespace std;
int main() {
	cout << "输入两个整数a和b：" << endl;
	int a = 0, b = 0;
	cin >> a >> b;
	if (!b) {	//如果第二个数为0
		cerr << "b不能为0！" << endl;
		return -1;	//表示异常
	}
	else {
		cout << "a整除b的结果为" << a / b << endl;
		return 0;	//表示成功
	}
}
