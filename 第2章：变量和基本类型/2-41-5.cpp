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
	Sales_data total;//保存下一条交易记录的变量
	//读入第一条交易记录，并确保有数据可以处理
	if(cin>>total.ISBN>>total.count>>total.money){
		Sales_data trans;	//保存和的变量
		//读入并处理剩余交易记录
		while(cin>>trans.ISBN){
			cin>>trans.count>>trans.money;
			if(total.ISBN==trans.ISBN)//如果我们仍在处理相同的书
				add_sales(total,trans);	//更新总销售额
			else{
				//打印前一本书的结果
				print_sales(total);
				total=trans;	//total现在表示下一本书的销售额 	
			}
		} //while 
		print_sales(total);	//打印最后一本书的结果 
	} //if
	else{
		//没有输入！警告
		cerr<<"No Data?!"<<endl;
		return -1;	//表示失败 
	} 
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
int print_sales(Sales_data book){
/*读取书籍销售记录,将记录打印到标准输出上*/
	double all_money=0;	//总销售额 
	all_money=book.count*book.money; 
	cout<<book.ISBN<<" "<<book.count<<" "<<all_money<<" "<<book.money<<endl;
	return 0;
}
