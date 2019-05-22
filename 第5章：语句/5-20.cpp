#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "输入一组单词：" << endl;
	string nowString, lastString, repeatString;
	//分别表示当前处理的string、上一个处理的string、重复出现的string
	while (cin >> nowString) {
		if (nowString == lastString) {
			repeatString = nowString;
			break;
		}
		lastString = nowString;
	}
	if (!repeatString.empty())
		cout << "重复的单词为" << repeatString << endl;
	else
		cout << "没有重复出现的单词" << endl;
	return 0;
}
