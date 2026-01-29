#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    //( ax + b ) : ( cx + d ) = 0
    if (a == 0 && b == 0) {
        cout << "INF" << endl;
    }
    else if (a == 0 && b != 0) {
        cout << "NO" << endl;
    }
    else if (a != 0 && b != 0) {
        if ((-b) % a != 0) {
            cout << "NO" << endl;
        }
        else if (c * (-b / a) + d == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << (-b) / a << endl;
        }
    }
}
