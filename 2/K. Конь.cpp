#include <iostream>

using namespace std;

int main() {
	int y1, x1, y2, x2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;

	bool queen = (abs(x1 - x2) == abs(y1 - y2)) || (x1 == x2 || y1 == y2);
	bool limite = (abs(y1 - y2) < 3 && abs(x1 - x2) < 3);

	if (!queen && limite) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
