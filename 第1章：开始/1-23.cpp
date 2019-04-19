#include <iostream>
#include "Sales_item.h"	
using namespace std;
int main()
{
	Sales_item currBook,book;
	//currBook储存正在统计的书籍，book储存读入的新书 
	if(cin>>currBook){	//读入书籍 
		int count=1;	//储存与当前书籍有相同ISBN书的销售记录数
		while(cin>>book){	//读入新书 
			if(book.isbn()==currBook.isbn())//ISBN相同 
				++count; 
			else{	//ISBN不同 
				cout<<currBook.isbn()<<" "<<count<<endl;
				//输出当前书籍的ISBN和销售记录数
				currBook=book;
				count=1;	//处理新书 
			}
		}//while
		cout<<currBook.isbn()<<" "<<count<<endl;
		//输出最后书籍的ISBN和销售记录数
	}//if
	return 0;            
}//本题处理方法类似于1.18
