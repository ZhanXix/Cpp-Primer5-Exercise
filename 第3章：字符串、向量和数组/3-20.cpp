#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
	int num;
	vector<int> ivec;
	cout << "输入一组整数：" << endl; 
	while(cin>>num)	//读入一组整数 
		ivec.push_back(num);	//存入vector对象 
	auto j = ivec.size()-1;
	decltype(j) i=0;
	//j从尾向头扫描,i从头向尾扫描,直到二者相遇 	
	while(j>i){
		cout << ivec[i] + ivec[j] << endl;//输出每对元素的和 
		--j;
		++i;
	}
	return 0;           
}
