#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	
	int h = n / 3600 % 24;

	int mD = n % 3600 / 60 / 10;
	int mEd = n % 3600 / 60 % 10;

	int secD = n % 3600 % 60 / 10;
	int secEd = n % 3600 % 60 % 10;

	cout << h << ":" << to_string(mD) + to_string(mEd) << ":" << to_string(secD) + to_string(secEd);
}
