#include <iostream>
#include "Sales_item.h"	
using namespace std;
int main()
{
	Sales_item allBook,book;
	cin>>allBook;	//读入第一条销售记录，作为初始记录	 
	while(cin>>book)	//读入余下多条销售记录 
		allBook+=book;	//将每条销售记录与初始记录相加 
	cout<<allBook<<endl;	//输出所有记录的和 
	return 0;          
}
//这里输入了多个ISBN相同的Sales_item对象
