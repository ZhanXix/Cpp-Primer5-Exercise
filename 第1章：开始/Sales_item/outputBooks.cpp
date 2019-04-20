#include <iostream>
#include "Sales_item.h"	
//头文件Sales_item下载于书中网址 
using namespace std;
int main()
{
	Sales_item book;
	while(cin>>book){	//读取一组书籍销售记录
		cout<<book<<endl;	//将每条记录打印到标准输出上 
	}
	return 0;          
}
//这里使用了书中网址提供的book_sales文件
//在命令提示符进行重定向输入 
//outputBooks <book_sales >outfile.txt 

