//使用传统for循环 
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
	for(decltype(n) i=0; i<n; ++i)
		//对于s中的每一个字符
		s[i] = 'x';	//用x替代字符
	cout << s << endl;
	return 0;
}
//我觉得范围for语句（3.6中使用）最好
//因为它形式简单，书写方便 
