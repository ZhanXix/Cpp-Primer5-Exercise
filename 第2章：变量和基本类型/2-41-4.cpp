#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
	string ISBN;	//ISBN号
	int count=0;	//售出的册数 
	double money=0;	//单价 
}; 

int main(){
	Sales_data currBook,book;
	//currBook储存正在统计的书籍，book储存读入的新书 
	if(cin>>currBook.ISBN>>currBook.count>>currBook.money){	//读入书籍 
		int count=1;	//储存与当前书籍有相同ISBN书的销售记录数
		while(cin>>book.ISBN>>book.count>>book.money){	//读入新书 
			if(book.ISBN==currBook.ISBN)//ISBN相同 
				++count; 
			else{	//ISBN不同 
				cout<<currBook.ISBN<<" "<<count<<endl;
				//输出当前书籍的ISBN和销售记录数
				currBook=book;
				count=1;	//处理新书 
			}
		}//while
		cout<<currBook.ISBN<<" "<<count<<endl;
		//输出最后书籍的ISBN和销售记录数
	}//if
	return 0;      
}
