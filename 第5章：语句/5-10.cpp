#include <iostream>
using namespace std;
int main() {
	cout << "输入一串字符：" << endl;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;//统计元音字母数量
	char c;
	while (cin>>c)
	{
		if (c == 'a' || c == 'A') ++aCnt;
		else if (c == 'e' || c == 'E') ++eCnt;
		else if (c == 'i' || c == 'I') ++iCnt;
		else if (c == 'o' || c == 'O') ++oCnt;
		else if (c == 'u' || c == 'U') ++uCnt;
	}
	cout << "aCnt=" << aCnt << endl;
	cout << "eCnt=" << eCnt << endl;
	cout << "iCnt=" << iCnt << endl;
	cout << "oCnt=" << oCnt << endl;
	cout << "uCnt=" << uCnt << endl;
	return 0;
}
