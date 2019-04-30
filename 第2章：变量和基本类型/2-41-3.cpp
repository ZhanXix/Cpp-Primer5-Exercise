#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
	string ISBN;	//ISBN号
	int count=0;	//售出的册数 
	double money=0;	//单价 
}; 
int add_sales(Sales_data &book1,Sales_data book2);
int print_sales(Sales_data book);

int main(){
	Sales_data allBook,book;
	cin>>allBook.ISBN>>allBook.count>>allBook.money;	
	//读入第一条销售记录，作为初始记录	 
	while(cin>>book.ISBN){	
		cin>>book.count>>book.money;	//读入余下多条销售记录
		int flag=add_sales(allBook,book);//将每条销售记录与初始记录相加 
		if(flag!=0){	
			cerr<<"Error! You should put data with the same ISBN"<<endl; 
			return -1;					//若出错，则报错 
		} 
	}//while 
	print_sales(allBook);
	return 0;         
}
int add_sales(Sales_data &book1,Sales_data book2){
/*读取两个书籍销售记录,得到两条记录的和,置于book1中*/
	if(book1.ISBN==book2.ISBN){
		double all_money=book1.count*book1.money+book2.count*book2.money;	
		//计算总销售额 
		book1.count+=book2.count;
		//计算总售出册数  
		book1.money=all_money/book1.count;
		//计算平均单价 
		return 0;
	}//if
	else	
		return -1;	//出错 
} 
int  print_sales(Sales_data book){
/*读取书籍销售记录,将记录打印到标准输出上*/
	double all_money=0;	//总销售额 
	all_money=book.count*book.money; 
	cout<<book.ISBN<<" "<<book.count<<" "<<all_money<<" "<<book.money<<endl;
	return 0;
}
