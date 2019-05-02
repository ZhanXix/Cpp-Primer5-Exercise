#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main(){
	string str;
	vector<string> v; 
	cout << "输入一组字符串：" << endl;
	while(cin>>str)	//读入一组字符串 
		v.push_back(str); 	//存入vector对象 
	return 0;           
} 
