//判断成绩所处区段
#include <iostream>
using namespace std;
int main() {
	int grade;
	cout << "input grade:" << endl;
	cin >> grade;
	//版本一：只使用条件运算符
	string finalgrade1 = (grade > 90) ? "high pass"
		: (grade > 75) ? "pass"
		: (grade >= 60) ? "low pass" : "fail";
	cout << finalgrade1 << endl;
	//版本二：使用if语句
	string finalgrade2;
	if (grade > 90) finalgrade2 = "high pass";
	else if (grade > 75) finalgrade2 = "pass";
	else if (grade >= 60)finalgrade2 = "low pass";
	else finalgrade2 = "fail";
	cout << finalgrade2 << endl;
	return 0;
}
//显然第二个版本的程序更容易理解，因为条件清晰、判断顺序符合人的思维方式
