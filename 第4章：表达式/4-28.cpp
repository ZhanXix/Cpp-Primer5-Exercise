//输出内置类型所占空间大小
#include <iostream>
using namespace std;
int main() {
	cout << "bool " << sizeof(bool) << endl;
	cout << "char " << sizeof(char) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "long " << sizeof(long) << endl;
	cout << "long long " << sizeof(long long) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "long double " << sizeof(long double) << endl;
	//其他类型同上
	return 0;
}
