#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(){
	string line;
	getline(cin,line);	//一次读入一整行 
	cout << line << endl;
	return 0;          
}
