#include <iostream>
using namespace std;
int main() {
	cout << "输入一串字符：" << endl;
	char c;
	int vowelCnt=0;	//元音字母数
	while (cin>>c)
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			++vowelCnt;
	}
	cout << "元音字母数为:" << vowelCnt << endl;
	return 0;
}
