int main() {
	int a, b, c, d = 0;
	cin >> a >> b >> c >> d;
	int e = 0; //rubli
	int f = 0; //kopiyka
	
	int sdacha = abs((a * 100 + b) - (c * 100 + d));
	
	e = sdacha / 100;
	f = sdacha % 100;
	cout << endl;
	cout << e << " " << f << endl;
}
