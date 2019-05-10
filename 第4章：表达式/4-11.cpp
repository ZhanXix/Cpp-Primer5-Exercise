#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
	//确保a大于b、b大于c、c大于d 
	double a,b,c,d;
	cout << "输入四个数字a、b、c、d" << endl; 
	cin >> a >> b >> c >> d;
	if(a>b&&b>c&&c>d){
		cout << "a>b>c>d" << endl;
		return 0;
	}
	else{
		std::cerr << "大小关系不正确！" << endl;
		return -1;
	}
}

