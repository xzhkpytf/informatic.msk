#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int z = true;

    if (!(a + b > c && b + c > a && a + c > b)) {
        cout << "impossible" << endl;
        z = false;
    }
    else if (a == b && b == c && c == a) {
        cout << "acute" << endl;
        z = false;
    }

    if (z) {
        int k1 = 0;
        int k2 = 0;
        int big = 0;

        if (a > b && a > c) {
            big = a;
            k1 = b;
            k2 = c;
        }
        else if (b > a && b > c) {
            big = b;
            k1 = a;
            k2 = c;
        }
        else if (c > a && c > b) {
            big = c;
            k1 = b;
            k2 = a;
        }


        if (big * big == (k1 * k1 + k2 * k2)) {
            cout << "right" << endl;
        }
        else if (big * big < (k1 * k1 + k2 * k2)) {
            cout << "acute" << endl;
        }
        else if (big * big > (k1 * k1 + k2 * k2)) {
            cout << "obtuse" << endl;
        }
    }
}
