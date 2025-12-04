#include <iostream>

using namespace std;

int main() {
	int h = 0;
	int a = 0;
	int b = 0;
	cin >> h >> a >> b;

	/*cout << int(((a - b) % 2 == 0) * (h / (a - b))) + int(((a - b) % 2 != 0) * (int((a != 0) * (h / a)) + int((b != 0) * (h / b)))) << endl;*/

	int days = 1 + ((h - a) / (a - b)) + ((h - a) % (a - b) + (a - b) - 1) / (a - b);
	cout << days << endl;
}
