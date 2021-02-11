#include <iostream>

using namespace std;

double x;
double result;
void f(void);

void main() {

	x = 26;

	f();

	cout << result << endl;

	cin >> x;

	f();

	cout << result;

	cin >> x;

}

void f(void) {

	result = 1 / (sqrt(x + 2));

}






