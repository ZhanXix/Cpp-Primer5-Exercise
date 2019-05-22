#include <iostream>
#include <vector>
using namespace std;
bool v_compare(vector<int> v1, vector<int> v2);

bool main() {
	vector<int> v1 = { 0,1,1,2 };
	vector<int> v2 = { 0,1,1,2,3,5,8 };
	if (v1.size() < v2.size()) //若v1长度较短
		return v_compare(v1, v2);
	else return v_compare(v2, v1); //若v2长度较短
}

bool v_compare(vector<int> v1, vector<int> v2) {
	unsigned i = 0;
	for (; i < v1.size(); ++i) {	
		//将长度较短的vector的每一个元素斗鱼另一个相比较
		if (v1[i] != v2[i]) break;
	}
	if (i = v1.size()) return true; //为前缀时，返回真
	else return false;//否则，返回假
}
