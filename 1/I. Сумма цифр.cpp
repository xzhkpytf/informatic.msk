#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = n/100;
    int d = (n/10)%10;
    int e = n%10;

    n = s+d+e;
    cout << n << endl;
}
