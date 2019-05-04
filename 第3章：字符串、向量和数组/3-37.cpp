#include <iostream>
using std::cin; 
using std::cout;
using std::endl;
int main(){	
	//建立一个存有'h','e','l','l','o'的 C风格字符串ca 
	const char ca[] = {'h','e','l','l','o'};
	const char *cp = ca;	//定义一个指向ca[0]的指针 
	while(*cp){			//依次输出ca 中的所有字符 
		cout << *cp << endl;
		++cp;
	}
	return 0; 
   
}
/*
程序输出结果：
h
e
l
l
o
*/ 
