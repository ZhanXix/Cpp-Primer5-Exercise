#include <iostream>
using std::cout;
using std::endl;
int main(){
	//输出ia的所有元素 
	//使用auto关键字 
	int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	//版本一：范围for语句
	cout << "版本一：" << endl;
	for(auto &p : ia)
		for(auto q : p)
			cout << q << " ";
	cout << endl;
	//版本二：下标运算符 
	cout << "版本二：" << endl;
	for(auto p=0; p!=3; ++p)
		for(auto q=0; q!=4; ++q)
			cout << ia[p][q] << " ";
	cout << endl;
	//版本三：指针 
	cout << "版本三：" << endl;
	for(auto p=ia; p!=ia+3; ++p)
		for(auto q=*p; q!=*p+4; ++q)
			cout << *q << " ";
	cout << endl;
	return 0; 
}

