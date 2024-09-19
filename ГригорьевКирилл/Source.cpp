#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	double S, r, R, a;

	cout << "¬ведите длину стороны: ";
	cin >> a;

	S = a * a * sqrt(3) / 4;
	R = a / sqrt(3);
	r = R / 2;

	cout << "\n"
		<< "S = " << S
		<< "; R = " << R
		<< "; r = " << r << "\n";

	return 0;
}