#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    int sides = 2 * n;

    int z = (sides + k - 1) / k;

    int time = z * m;

    if (time < 2 * m) {
        time = 2 * m;
    }
    cout << time << endl;
}
