#include <iostream>

using namespace std;

int main() {
	int y1, x1, y2, x2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;

	if (((y1==y2) || (abs(y1-y2) == 1)) && ((x1 == x2) || (abs(x1 - x2) == 1))) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
