#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
	int x;
	while(cin>>x&&x!=42){
	//从标准输入中读取整数，遇到42时停止 
		cout << x << endl;
	}
	return 0; 
}

