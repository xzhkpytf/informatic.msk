#include <iostream>
#include <cmath>
using namespace std;

int SumOfDigits(int n) {
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	cout << "sum = " << sum << endl;
	return sum;
}
