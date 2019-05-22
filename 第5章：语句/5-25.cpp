#include <iostream>
using namespace std;
int main() {
	cout << "输入两个整数：" << endl;
	int a = 0, b = 0;
	while (cin >> a >> b) {
		try {
			if (!b) 	//如果第二个数为0，异常
				throw runtime_error("错误！被除数(第二个数)不能为0");
			cout << a << "整除" << b << "的结果为" << a / b << endl;	//若程序执行到这里，证明第二个数不为0
			return 0;	//表示成功
		}
		catch (runtime_error err) {
			//提醒用户被除数不能为0，询问是否重新输入
			cout << err.what()
				<< "\n是否再次尝试？输入y再次尝试，输入n退出" << endl;
			char c;
			cin >> c;
			if (!c || c == 'n')
				break;	//退出
			cout << "输入两个整数：" << endl;
		}

	}
}
