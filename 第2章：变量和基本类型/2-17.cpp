#include <iostream>
using namespace std;
int main()
{
	int i,&ri=i;	//ri是引用类型，即i的别名 
	i=5;
	ri=10;	//即是赋给i 
	cout<<i<<" "<<ri<<endl;
	return 0;          
}
