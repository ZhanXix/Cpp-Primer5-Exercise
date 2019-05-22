//之前一直没用switch，现在改用switch语句
#include <iostream>
using namespace std;
int main() {
	cout << "输入一串字符：" << endl;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;//统计元音字母数量
	unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;//统计空格、制表符、换行符的数量
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;//统计ff、fl、fi字符序列的数量
	bool flag = 0;//标记前一个字符是否为f
	char c;
	while (cin>>noskipws>>c)// 此处的std::noskipws表示的是不忽略任何地方的空白
	{
		switch (c)
		{
		case 'a': case 'A':
			flag = 0;
			++aCnt;
			break;
		case 'e': case 'E':
			flag = 0;
			++eCnt;
			break;
		case 'i': 
			if (flag) ++fiCnt;
		case 'I':
			flag = 0;
			++iCnt;
			break;
		case 'o': case 'O':
			flag = 0;
			++oCnt;
			break;
		case 'u': case 'U':
			flag = 0;
			++uCnt;
			break;
		case ' ':
			flag = 0;
			++spaceCnt;
			break;
		case '\t':
			flag = 0;
			++tabCnt;
			break;
		case '\n':
			flag = 0;
			++newlineCnt;
			break;
		case 'f':
			if(flag) ++ffCnt;
			flag = 1;
			break;
		case 'l':
			if (flag) ++flCnt;
			flag = 0;
			break;
		default:
			flag = 0;
			break;
		} 
	}
	cout << "aCnt=" << aCnt << endl;
	cout << "eCnt=" << eCnt << endl;
	cout << "iCnt=" << iCnt << endl;
	cout << "oCnt=" << oCnt << endl;
	cout << "uCnt=" << uCnt << endl;
	cout << "spaceCnt=" << spaceCnt << endl;
	cout << "tabCnt=" << tabCnt << endl;
	cout << "newlineCnt=" << newlineCnt << endl;
	cout << "ffCnt=" << ffCnt << endl;
	cout << "flCnt=" << flCnt << endl;
	cout << "fiCnt=" << fiCnt << endl;
	return 0;
}
