#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b = 0;
	cin >> a;
	cin >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}
