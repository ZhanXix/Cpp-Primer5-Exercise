#include <iostream>
#include <vector> 
using std::cin; 
using std::cout;
using std::endl;
using std::vector; 
int main(){	
	vector<int> v1,v2;
	int n; 
	cout << "输入vector1的所有元素（整数）,以-1024结束：" << endl;
	while(cin>>n&&n!=-1024)
		v1.push_back(n);  
	cout << "输入vector2的所有元素（整数）,以-1024结束：" << endl;
	while(cin>>n&&n!=-1024)
		v2.push_back(n);  	//建立两个vector对象 
	if(v1!=v2)
		cout << "vector对象不相等!" << endl;
    else	
		cout << "vector对象相等!" << endl;
	return 0; 
   
}
