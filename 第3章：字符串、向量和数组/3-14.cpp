#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
	int num;
	vector<int> v; 
	cout << "输入一组整数：" << endl;
	while(cin>>num)	//读入一组整数 
		v.push_back(num); 	//存入vector对象 
	return 0;           
} 
