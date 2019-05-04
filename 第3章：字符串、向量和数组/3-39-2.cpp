//比较两个C风格字符串 
#include <iostream>
#include <cstring>
using std::cin; 
using std::cout;
using std::endl;
int main(){	
	//建立两个C风格字符串 
	char s1[101],s2[101];
	cout << "输入字符串1,以#结束（最多100个字符）：" << endl;
	char c;
	int i=0;
	while(cin>>c&&c!='#'&&i<100){
		s1[i] = c;
		i++;
	}
	s1[i]='\0';
	cout << "输入字符串2,以#结束（最多100个字符）：" << endl;
	i=0;
	while(cin>>c&&c!='#'&&i<100){
		s2[i] = c;
		i++;
	}
	s2[i]='\0';
	//比较两个C风格字符串
	int flag = strcmp(s1,s2);
	if(flag>0)
		cout << "字符串1 大于 字符串2 " << endl;
	else if(flag<0)
		cout << "字符串1 小于 字符串2 " << endl;	
	else 
		cout << "字符串1 与 字符串2 相等" << endl;
	return 0; 
}

