#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a = 0;
int c = 0;
cin >> a;
while (c!=a) {
	c++;
	if(c*c < a){
		cout << " " << c*c;
	}
}
}
