#include <iostream>
#include <string>
using namespace std;
int main()
{
	int l = 0;
	int sum = 0;

	cin >> l;

	/*sum = 9 * 60 + l * 45 + (l / 2) * 5 + ((l - 1) - (l / 2)) * 15;*/

	sum = l * 45 + (l / 2) * 5 + ((l - 1) / 2) * 15;
	
	cout << 9 + sum / 60 << " " << sum % 60 << endl;
}
