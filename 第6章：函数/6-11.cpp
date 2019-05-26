#include <iostream>
using namespace std;

void reset(int& i)
{
	i = 0;
}

int main(int argc, char const* argv[])
{
	int i = 20;
	cout << "i = " << i << endl;
	cout << "重置中..." << std::endl;
	reset(i);
	cout << "i = " << i << endl;
	return 0;
}
