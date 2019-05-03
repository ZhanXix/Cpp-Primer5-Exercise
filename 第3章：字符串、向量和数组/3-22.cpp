#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main(){
	vector<string> text{"This"," ","is"," ","the"," ","first"," ","paragraph",".","",
		"And"," ","this"," ","is"," ","the"," ","last"," ","paragraph","."};
	//把text的第一段改成大写形式，并输出它。 
	for(auto it=text.begin();
		it!=text.end()&&!(*it).empty(); ++it){
		for(auto &c : *it)
			c=toupper(c);
		cout << *it;
	}
	cout << endl;
	return 0;           
} 
