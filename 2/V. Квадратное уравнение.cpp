#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    //ax^2 + bx + c = 0
    float x1 = 0;
    float x2 = 0;
    float D = 0;

    D = (b * b) + (-4 * a * c);

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    }
    else if (D == 0) {
        x1 = (-b) / (2 * a);
        cout << x1 << endl;
    }

}
