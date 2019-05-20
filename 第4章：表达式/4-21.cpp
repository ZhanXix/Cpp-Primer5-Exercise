#include <iostream>
#include <vector>
using namespace std;
int main() {
	int a;
	vector<int> v;
	cout << "输入一组整数：" << endl;
	while (cin >> a)
		v.push_back(a);
	if (v.empty()) {
		cout << "empty vector！" << endl;
		return -1;
	}
	auto v_size = v.size();
	cout << "将奇数值翻倍：" << endl;
	for (auto i = 0; i < v_size; ++i) {
		if (v[i] % 2 != 0) v[i] *= 2;
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}

