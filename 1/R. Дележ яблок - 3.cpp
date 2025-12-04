#include <iostream>

using namespace std;

int main() {
	int n = 0; 
	int k = 0;

	cin >> n >> k;

	cout << int((k % n == 0)*(-n)) + n - (k % n) << endl;
}
