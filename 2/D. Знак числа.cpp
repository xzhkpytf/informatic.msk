#include <iostream>

using namespace std;
int sign(int n) {
	if (n > 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		return -1;
	}

}

int main() {
	int n = 0;
	cin >> n;

	cout << sign(n) << endl;
}
