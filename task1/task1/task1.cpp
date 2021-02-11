#include <iostream>
using namespace std;

void main(double f, double x) {
	x = 26;
	f = 1 / (sqrt(x + 2));
	cout << f << endl;
	cin >> x;
	f = 1 / (sqrt(x + 2));
	cout << f << endl;
	cin >> x;
}