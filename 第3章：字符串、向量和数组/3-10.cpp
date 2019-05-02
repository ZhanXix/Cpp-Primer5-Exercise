#include <iostream>
#include <string>
#include <cctype> 
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(){
	cout << "输入一行字符串：" << endl;
	string s1,s2;
	getline(cin,s1);	//读入一行字符串s1
	for(auto c : s1)	//对于s1中的每一个字符
		if(!ispunct(c))	//若不为标点符号
			s2 += c;	//连接到s2中 
	cout << s2 << endl;
	return 0;
} 
