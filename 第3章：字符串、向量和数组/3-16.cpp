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
	cout << "v1:" << endl;
	for(auto c : v1)
		cout << c << " ";
	cout << endl << "v2:" << endl;
	for(auto c : v2)
		cout << c << " ";
	cout << endl << "v3:" << endl;
	for(auto c : v3)
		cout << c << " ";
	cout << endl << "v4:" << endl;
	for(auto c : v4)
		cout << c << " ";
	cout << endl << "v5:" << endl;
	for(auto c : v5)
		cout << c << " ";
	cout << endl << "v6:" << endl;
	for(auto c : v6)
		cout << c << " ";
	cout << endl << "v7:" << endl;
	for(auto c : v7)
		cout << c << " ";
	cout << endl;
	return 0;           
} //3.13中回答正确 
/*
(a)默认初始化，v1不含任何元素。
(b)v2含10个元素，值都是0。
(c)v3含10个元素，值都是42。
(d)v4含1个元素，值为10。
(e)v5含2个元素，值分别为10和42。
(f)v6含10个元素，值为空。
(g)v7含10个元素，值都是"hi"。
*/ 
