/*输出：
10
1
理由：
对数组使用时，返回的是数组的大小；
在对指针使用时，返回的是指针本身的大小；
对解引用指针使用时，返回指针所指对象所占空间大小
*/
#include <iostream>
using namespace std;
int main() {
	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	return 0;
}
//运行结果和推断相同
