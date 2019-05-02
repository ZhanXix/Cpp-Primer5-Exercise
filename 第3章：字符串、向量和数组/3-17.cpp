#include <iostream>
#include <vector>
#include <string>
#include <cctype> 
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main(){
	string word;
	vector<string> v;
	cout << "输入一组词：" << endl; 
	while(cin>>word)	//读入一组词
		v.push_back(word);	//存入vector对象 
	for(auto &s : v){
		for(auto &c : s)
			c = toupper(c);	//将所有词都改为大写形式 
		cout << s << endl;	//输出改变后的结果 
	}	
	return 0;           
}
