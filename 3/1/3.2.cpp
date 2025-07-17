#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a = 0;
int b = 0;

cin >> a;
cin >> b;
  
for (int i = a; i <= b; i++) {
	if (i % 2 == 0) {
		cout << " " << i;
	}
}
}
