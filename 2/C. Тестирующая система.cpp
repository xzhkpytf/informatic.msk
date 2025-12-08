#include <iostream>

using namespace std;

int main() {
	int n = 0;
	int z = 0;

	cin >> n >> z;

	if((n == 1 && z == 1) || (n!=1 && z != 1)){
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
