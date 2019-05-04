//比较两个string对象 
#include <iostream>
#include <string>
using std::cin; 
using std::cout;
using std::endl;
using std::string;
int main(){	
	string s1,s2;
	//建立两个string对象 
	cout << "输入string1,以回车结束：" << endl;
	getline(cin,s1);
	cout << "输入string2,以回车结束：" << endl;
	getline(cin,s2);
	//比较两个string对象  	
	if(s1>s2)
		cout << "string1 大于 string2 " << endl;
	else if(s1<s2)
		cout << "string1 小于 string2 " << endl;	
	else 
		cout << "string1 与 string2 相等" << endl;
	return 0; 
}

