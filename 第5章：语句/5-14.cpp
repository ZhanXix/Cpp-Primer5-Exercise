#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "输入一组单词：" << endl;
	string maxString, nowString, lastString;
	//分别表示连续出现次数最多的单词和当前处理的单词、上一个处理的单词
	unsigned maxCnt = 0, Cnt = 1;
	//分别表示出现的最大次数以及上一个单词出现的次数
	while (cin >> nowString) {
		if (nowString == lastString) ++Cnt;
		else {
			if (Cnt != 1 && Cnt > maxCnt) {
				maxCnt = Cnt;
				maxString = lastString;
			}
			Cnt = 1;
		}
		lastString = nowString;
	}
	if (maxCnt)
		cout << "连续出现次数最多的单词为" << maxString << "，出现次数为" << maxCnt;
	else
		cout << "没有连续出现的单词" << endl;
	return 0;
}
