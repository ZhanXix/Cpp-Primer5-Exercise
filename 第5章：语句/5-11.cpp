#include <iostream>
using namespace std;
int main() {
	cout << "输入一串字符：" << endl;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;//统计元音字母数量
	unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;//统计空格、制表符、换行符的数量
	char c;
	while (cin>>noskipws>>c)// 此处的std::noskipws表示的是不忽略任何地方的空白
	{
		if (c == 'a' || c == 'A') ++aCnt;
		else if (c == 'e' || c == 'E') ++eCnt;
		else if (c == 'i' || c == 'I') ++iCnt;
		else if (c == 'o' || c == 'O') ++oCnt;
		else if (c == 'u' || c == 'U') ++uCnt;
		else if (c == ' ') ++spaceCnt;
		else if (c == '\t') ++tabCnt;
		else if (c == '\n') ++newlineCnt;
	}
	cout << "aCnt=" << aCnt << endl;
	cout << "eCnt=" << eCnt << endl;
	cout << "iCnt=" << iCnt << endl;
	cout << "oCnt=" << oCnt << endl;
	cout << "uCnt=" << uCnt << endl;
	cout << "spaceCnt=" << spaceCnt << endl;
	cout << "tabCnt=" << tabCnt << endl;
	cout << "newlineCnt=" << newlineCnt << endl;
	return 0;
}
