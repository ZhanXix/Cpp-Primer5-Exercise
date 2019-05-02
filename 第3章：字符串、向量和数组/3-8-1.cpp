//使用whlie循环 
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(){
	cout << "输入一行字符串：" << endl;
	string s;
	getline(cin,s);	//读入一行字符串
	auto n = s.size();
	decltype(n) i=0; 
	while(i<n){	//对于s中的每一个字符
		s[i] = 'x';	//用x替代字符
		++i; 
	}
	cout << s << endl;
	return 0;
}
