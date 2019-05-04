#include <iostream>
using std::cout;
using std::endl;
int main(){
	int ia[10]; 	//定义一个含有10个int的数组
	int *p=ia;
	//用指针将数组中的元素置0
	for(int i=0; i<10; ++i,++p){
		*p=0;
		cout << *p << " ";
	}
	cout << endl;
	return 0;           
}
