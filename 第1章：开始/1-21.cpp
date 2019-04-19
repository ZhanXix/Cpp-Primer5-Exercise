#include <iostream>
#include "Sales_item.h"	
using namespace std;
int main()
{
	Sales_item book1,book2;
	cin>>book1>>book2;	//读取两个书籍销售记录
	cout<<book1+book2<<endl;	//输出两条记录的和 
	return 0;          
}
//这里输入了两个ISBN相同的Sales_item对象
