//将数字成绩转换为字母成绩
//改写5.5，使用条件运算符
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
	grade < 60 ? lettergrade = scores[0] :
		(grade == 100 ? lettergrade = scores[5] : (
			lettergrade = scores[(grade - 50) / 10]));
	lettergrade += (grade > 60 && grade < 100) ?  //添加+或-
		((grade % 10 >= 7) ? "+" :
		((grade % 10 <= 3) ? "-" : "")):"";
	cout << "字母成绩为" << lettergrade << endl;
	return 0;
}

