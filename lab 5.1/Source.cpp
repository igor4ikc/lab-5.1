// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double x = (g(1,s) + (1 + (g(t,1) * g(t,1))) * (1 + (g(t, 1) * g(t, 1))));
	cout << "x = " << x << endl;
	return 0;
}
double g(const double a, const double b) // визначення
{
	return ((a * a) + a * b + (b * b)) ;
}