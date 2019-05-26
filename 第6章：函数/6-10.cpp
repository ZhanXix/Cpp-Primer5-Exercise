#include <iostream>
using namespace std;

void exchange(int *v1, int *v2){
	//交换v1和v2的值
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

int main()
{
	cout << "输入两个数字：" << endl;
	int x, y;
	cin >> x >> y;
	exchange(&x, &y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
