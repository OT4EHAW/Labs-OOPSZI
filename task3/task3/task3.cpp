#include <iostream>

using namespace std;

double f(double x);

void main(double x) {

	double result;

	x = 26;
	result = f(x);
	cout << result << endl;

	cin >> x;
	result = f(x);
	cout << result;

	cin >> x;
}


double f(double x) {

	double func;
	func = 1 / (sqrt(x + 2));
	return func;
}



