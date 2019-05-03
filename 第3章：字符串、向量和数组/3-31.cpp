#include <cstddef>
#include <iostream>
using std::cout;
using std::endl;
int main(){
	constexpr size_t array_size=10;
	int ia[array_size]; 
	//定义一个含有10个int的数组，令每个元素的值就是其下标值 
	for(size_t ix=0; ix<array_size; ++ix){ 
		ia[ix]=ix;
		cout << ia[ix] << " "; 
	} 
	cout << endl;
	return 0;           
}
