#include <iostream>

using namespace std;

int main() {
	int a, b, c = 0;
	cin >> a >> b >> c;
	int mx = a;
	if (c > mx) {
		mx = c;
	}
	if (b > mx) {
		mx = b;
	}
	cout << mx << endl;

}
