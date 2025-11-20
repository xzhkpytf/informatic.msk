#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b, n = 0;
	cin >> a >> b >> n;

	pair<int, int> sum = { a,b };

	sum.first *= n;
	sum.second *= n;

	sum.first += sum.second / 100;

	sum.second %= 100;

	cout << sum.first << " " << sum.second << endl;
}
