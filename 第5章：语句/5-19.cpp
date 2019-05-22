#include <iostream>
#include <string>
using namespace std;
int main() {
	string condition;//循环条件
	do {
		cout << "输入两个string对象:" << endl;
		string s1, s2;
		cin >> s1 >> s2;
		cout << "较短的为";
		if(s1.size()<s2.size()) cout << s1 << endl;
		else cout << s2 << endl;	//输出较短的string对象
		cout << "若要继续，请输入yes；否则，请输入no。" << endl;
		cin >> condition;
	} while (!condition.empty()&&condition[0]=='y');
	return 0;
}
