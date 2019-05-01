#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(){
	cout << "输入多个字符串：" << endl;
	string s,big_s;
	while(cin >> s){	//读入多个字符串 
		big_s += s;		//将它们连接在一起 
	}
	cout << big_s << endl;//输出连接成的大字符串 
	return 0;
}
