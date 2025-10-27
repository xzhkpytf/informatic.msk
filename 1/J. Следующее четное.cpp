#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	switch (n % 10)
	{
	case 0:
		n += 2;
		cout << n << endl;
		break;
	default:
		n += 1;
		cout << n << endl;
		break;
	}
}
