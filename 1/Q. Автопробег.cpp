#include <iostream>
using namespace std;

int main() {
	int n = 0; // за день
	int m = 0; // нужно проехать

	cin >> n >> m;

	cout << m / n + int((m%n) != 0);

}
