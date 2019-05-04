#include <iostream>
#include <vector>
using std::cin; 
using std::cout;
using std::endl;
using std::vector; 
int main(){	
	//建立一个整型数组 
	unsigned n;
	cout << "输入数组的长度：" << endl;
	cin >> n;
	int a[n];
	cout << "输入数组的所有元素（整数）：" << endl;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	//用整型数组初始化一个vector对象 
	vector<int> v(a, a+n);
	cout << "vector的所有元素：" << endl;
	for(auto i : v)
		cout << i << ' ';
	cout << endl; 
	return 0; 
}

