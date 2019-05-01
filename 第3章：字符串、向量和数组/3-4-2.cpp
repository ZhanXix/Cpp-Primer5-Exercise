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
	if(s1.size() == s2.size())	//若字符串等长 
		cout << "字符串等长" << endl;
	else{		//若字符串不等长,输出较长的字符串 
		cout << "字符串不等长，较长的为：" << endl; 
		if(s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl; 
	} 
	return 0;
}
