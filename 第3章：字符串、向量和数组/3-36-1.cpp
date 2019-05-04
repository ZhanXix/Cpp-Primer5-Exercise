#include <iostream>
using std::cin; 
using std::cout;
using std::endl;
int main(){	
	unsigned n1;
	cout << "输入数组1的长度：" << endl;
	cin >> n1;
	int a1[n1];
	cout << "输入数组1的所有元素（整数）：" << endl;
	for(int i=0; i<n1; ++i)
		cin >> a1[i];
	unsigned n2;
	cout << "输入数组2的长度：" << endl;
	cin >> n2;
	if(n1!=n2){ //若数组长度不相等，则判定数组不相等
		cout << "数组不相等!" << endl;
		return -1; 
	}
	int a2[n2];
	cout << "输入数组2的所有元素（整数）：" << endl;
	for(int i=0; i<n2; ++i)
		cin >> a2[i];
	int *p1=a1, *p2=a2;
	for(int i=0; i<n1; ++i,++p1,++p2)
		if(*p1!=*p2){	//若数组中有元素不相等,判定数组不相等 
			cout << "数组不相等!" << endl;
		return -1; 
		}
	cout << "数组相等!" << endl;
	return 0;           
}
