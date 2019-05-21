//将数字成绩转换为字母成绩
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	const vector<string> scores = { "F","D","C","B","A","A++" };
	int grade;
	cout << "输入成绩(100分制)：" << endl;
	cin >> grade;
	string lettergrade;
	if (grade < 60)
		lettergrade = scores[0];
	else if (grade == 100)
		lettergrade = scores[5];
	else {
		lettergrade = scores[(grade - 50) / 10];
		if (grade % 10 >= 7)	//添加+或-
			lettergrade += "+";
		else if (grade % 10 <= 3)
			lettergrade += "-";
	}
	cout << "字母成绩为" << lettergrade << endl;
	return 0;
}

