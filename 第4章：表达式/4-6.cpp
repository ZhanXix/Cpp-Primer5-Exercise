//确定一个整数是奇数还是偶数 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
	cout << "输入一个整数：" <<endl;
	int x;
	cin >> x;
	(x%2==1)? cout << "是奇数" <<endl : cout << "是偶数" <<endl; 
	return 0; 
}

