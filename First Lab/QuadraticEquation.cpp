#include "QuadraticEquation.h"


void QuadraticEquation()
{
	double a, b, c;
	complex <double> x1;
	complex <double> x2;
	cout << "a = ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	if (a == 0.0) {
		cout << "not a quadratic equation" << endl;
		x1 = -c / b;
		cout << "the only solution is x= " << x1.real() << endl;
	}
	else {

		double discriminant = (pow(b, 2.0) - 4 * a * c);
		if (discriminant > 0) {

			x1 = (-b + sqrt(discriminant)) / (2 * a);
			x2 = (-b - sqrt(discriminant)) / (2 * a);
			cout << "Two real solutions:" << endl << "x1 = " << x1.real() << endl << "x2 = " << x2.real() << endl;
		}
		else if (discriminant == 0.0) {
			double x = (-b / (2 * a));
			cout << "The only solution is x= " << x << endl;
		}
		else {
			x1.real(-b / (2 * a));
			x1.imag(sqrt(-discriminant) / (2 * a));
			x2 = conj(x1);

			cout << "Two imaginal solutions:" << endl << "x1 = " << x1.real() << " +(" << x1.imag() << ")i" << endl << "x2 = " << x2.real() << " +(" << x2.imag() << ")i" << endl;



		}

	}
}
