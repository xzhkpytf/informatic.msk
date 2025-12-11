#include <iostream>

using namespace std;
int sravnenie(int a, int b) {
	if (a > b) {
		return 1;
	}
	else if (a < b) {
		return 2;
	}

	return 0;
}
int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;

	cout << sravnenie(a, b) << endl;

}
