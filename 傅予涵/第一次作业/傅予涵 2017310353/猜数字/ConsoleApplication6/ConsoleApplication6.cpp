#include <iostream>

using namespace std;

int main()
{
	int a = 55;
	int n;
	while (1)
	{
		cout << "请输入一个数。" << endl;
		cin >> n;
		if (a == n)
		{
			cout << "n=" << n << endl;
			break;
		}
		if (a < n)cout << "你输入的数大了，请重新输入。" << endl;
		if (a > n)cout << "你输入的数小的，请重新输入。" << endl;
	}
	return 0;
}

