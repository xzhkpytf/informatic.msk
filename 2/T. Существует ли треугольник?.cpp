#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((b + c) > a) {
        if ((a + c) > b) {
            if ((a + b) > c) {
                cout << "YES" << endl;
                
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
    

}
