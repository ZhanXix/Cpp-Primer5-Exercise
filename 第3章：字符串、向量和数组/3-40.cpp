#include <cstring>
#include <iostream>
using std::cout;
using std::endl; 
int main(){	
	//建立两个字符数组 
	char ca1[]="Hello,";
	char ca2[]="World!" ;
	//建立一个字符串数组存放前两个数组连接后的结果
	char ca3[13];
	strcpy(ca3,ca1);
	strcat(ca3,ca2);
	for(int i=0; i<13; ++i)		//输出结果 
		cout << ca3[i];
	cout << endl;
	return 0; 
}

