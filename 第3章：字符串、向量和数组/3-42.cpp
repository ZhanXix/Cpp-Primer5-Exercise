#include <iostream>
#include <vector>
using std::cin; 
using std::cout;
using std::endl;
using std::vector; 
int main(){
	vector<int> v;
	int num; 
	cout << "输入vector所有元素(整数)：" << endl;
	while(cin>>num)
		v.push_back(num);  
	unsigned size=v.size();
	int a[size];
	//将vector对象v拷贝给一个数组a 
	for(unsigned i=0; i<size; ++i)
		a[i]=v[i];
	cout << "数组中的所有元素：" << endl;
	for(auto x : a)
		cout << x << endl;
	return 0; 
}

