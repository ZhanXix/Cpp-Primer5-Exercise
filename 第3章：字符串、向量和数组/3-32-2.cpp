#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
int main(){
	vector<int> ivec(10);
	//定义一个含有10个int元素的vector，令每个元素的值就是其下标值 
	for(int ix=0; ix<10; ++ix){ 
		ivec[ix]=ix;
		cout << ivec[ix] << " "; 
	} 
	cout << endl;
	//将刚刚创建的vector拷贝给另外一个vector
	vector<int> ivec2=ivec;
	for(int ix=0; ix<10; ++ix){ 
		cout << ivec2[ix] << " "; 
	} 	 
	return 0;           
}
