#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main(){
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};	//3.13中所有vector对象
	//使用迭代器 
	cout << "v1:" << endl;
	for(auto it=v1.begin(); it!=v1.end(); ++it)
		cout << *it << " ";
	cout << endl << "v2:" << endl;
	for(auto it=v2.begin(); it!=v2.end(); ++it)
		cout << *it << " ";
	cout << endl << "v3:" << endl;
	for(auto it=v3.begin(); it!=v3.end(); ++it)
		cout << *it << " ";
	cout << endl << "v4:" << endl;
	for(auto it=v4.begin(); it!=v4.end(); ++it)
		cout << *it << " ";
	cout << endl << "v5:" << endl;
	for(auto it=v5.begin(); it!=v5.end(); ++it)
		cout << *it << " ";
	cout << endl << "v6:" << endl;
	for(auto it=v6.begin(); it!=v6.end(); ++it)
		cout << *it << " ";
	cout << endl << "v7:" << endl;
	for(auto it=v7.begin(); it!=v7.end(); ++it)
		cout << *it << " ";
	cout << endl;
	return 0;           
} 
