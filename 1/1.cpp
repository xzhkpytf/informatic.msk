#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a = 0;
    float b = 0;

    cin >> a;
    cin >> b;
    float c = 0.0;

    float a2 = a * a;
    float b2 = b * b;

    c = a2 + b2;

    c = sqrt(c);

    cout << c << endl; 
    return 0;
}