#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(){
	cout << "输入两个字符串,以回车分割：" << endl;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1==s2)	//若字符串相等 
		cout << "字符串相等" << endl;
	else{		//若字符串不相等,输出较大的字符串 
		cout << "字符串不相等，较大的为：" << endl; 
		if(s1>s2)
			cout << s1 << endl;
		else
			cout << s2 << endl; 
	} 
	return 0;
}
