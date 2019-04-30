#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
	string ISBN;	//ISBN号
	int count=0;	//售出的册数 
	double money=0;	//单价 
}; 

int main(){
/*读取一组书籍销售记录,将每条记录打印到标准输出上*/
	Sales_data book;
	double all_money=0;	//总销售额 
	while(cin>>book.ISBN){
		cin>>book.count>>book.money;
		all_money=book.count*book.money; 
		cout<<book.ISBN<<" "<<book.count<<" "<<all_money<<" "<<book.money<<endl;
	}
	return 0;
} 
