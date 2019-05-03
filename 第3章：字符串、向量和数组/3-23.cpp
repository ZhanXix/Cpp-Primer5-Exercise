#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
	vector<int> ivec;
	int num;
	//创建一个含有10个整数的vector对象
	cout << "输入十个整数：" << endl;
	for(int i=0; i<10; ++i){
		cin >> num;
		ivec.push_back(num); 
	} 
	for(auto it=ivec.begin(); it!=ivec.end(); ++it){
		*it*=2;
		cout << *it << " ";
	}
	cout << endl;
	return 0;           
} 
