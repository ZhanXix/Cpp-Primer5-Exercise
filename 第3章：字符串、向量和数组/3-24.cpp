#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;
int main(){
	int num;
	vector<int> ivec;
	cout << "输入一组整数：" << endl; 
	while(cin>>num)	//读入一组整数 
		ivec.push_back(num);	//存入vector对象 
	auto i=ivec.begin(), j=ivec.end();
	//i从头向尾扫描,j从尾向头扫描,直到二者相遇
	if(i==j){
		cerr << "错误！未输入" << endl;
		return -1; 
	}
	--j;
	while(j>i){
		cout << *i + *j << endl;//输出每对元素的和 
		--j;
		++i;
	}
	return 0;           
}
