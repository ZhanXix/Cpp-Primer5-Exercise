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
	for(char &c : s)	//对于s中的每一个字符
		c = 'x';	//用x替代字符 
	cout << s << endl;
	return 0;
}
//循环控制变量的类型设为char，结果与上一题相同 
