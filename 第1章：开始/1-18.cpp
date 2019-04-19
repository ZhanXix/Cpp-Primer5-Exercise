#include <iostream>
using namespace std;
int main()
{
	int currVal=0,val=0;
	//currVal储存正在统计的数，val储存读入的新值
	if(cin>>currVal){	//读入数 
		int cnt=1;		//储存处理的currVal出现个数
		while(cin>>val){	//读入新数 
			if(val==currVal)	//若相同 
				++cnt;			 
			else{				//若不同 
				cout<<currVal<<" occurs "<<cnt<<" times"<<endl;
				//输出当前currVal出现的次数
				currVal=val;
				cnt=1;			//处理新数 
			}
		}//while 
		cout<<currVal<<" occurs "<<cnt<<" times"<<endl;
		//输出最后一个currVal出现的次数 
	} //if 
	return 0; 
}
