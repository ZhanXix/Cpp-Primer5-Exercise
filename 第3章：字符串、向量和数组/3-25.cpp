#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
	//以十分为一个分数段统计成绩的数量：
	//0~9,10~19，……，90~99，100 
	unsigned grade;
	vector<unsigned> scores(11,0);	//11个分数段
	auto it=scores.begin();
	while(cin>>grade)
		if(grade<=100)
			++(*(it+grade/10));	//将对应分数段的计数值加一 
	for(;it!=scores.end(); ++it)
		cout << *it << " ";		//输出统计结果 
	cout << endl;
	return 0;           
}
