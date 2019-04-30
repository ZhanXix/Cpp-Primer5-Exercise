#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
	string ISBN;	//ISBN号
	int count=0;	//售出的册数 
	double money=0;	//单价 
}; 

int main(){
/*读取两个书籍销售记录,输出两条记录的和 */
	Sales_data book1,book2;
	cin>>book1.ISBN>>book1.count>>book1.money;
	cin>>book2.ISBN>>book2.count>>book2.money;
	if(book1.ISBN==book2.ISBN){
		double all_money=book1.count*book1.money+book2.count*book2.money;	
		//计算总销售额 
		int all_count=book1.count+book2.count;
		//计算总售出册数  
		cout<<book1.ISBN<<" "<<all_count<<" "<<all_money<<" ";
		if(all_count){
			double avr=all_money/all_count;
			//计算平均单价 
			cout<<avr<<endl;
		}
		else
			cout<<"(Warning! No sales)"<<endl; 
		return 0;
	}//if
	else{
		cout<<"Error! You should put data with the same ISBN"<<endl; 
		return -1;	//出错 
	}//else

} 
