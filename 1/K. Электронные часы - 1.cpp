#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int h = 0;
	cin >> n;
	while (n >= 60) {
		n -= 60;
		h += 1;
		if (h > 23) {
			h = 0;
		}
	}
	cout << h << " " << n << endl;
}
