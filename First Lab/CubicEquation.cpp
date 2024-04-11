#include "CubicEquation.h"

void CubicEquation()
{
	double a, b, c, d;
	cout << "Enter a: \n";
	cin >> a;
	cout << "Enter b: \n";
	cin >> b;
	cout << "Enter c: \n";
	cin >> c;
	cout << "Enter d: \n";
	cin >> d;
	if (a != 0) {
		complex <double>x1, x2, x3;
		double p;
		double q;
		double disk;
		double fi;
		p = (3.0 * a * c - b * b) / (3.0 * a * a);
		q = (-9.0 * a * b * c + 27.0 * a * a * d + 2.0 * b * b * b) / (27.0 * a * a * a);
		disk = (p / 3.0) * (p / 3.0) * (p / 3.0) + (q / 2.0) * (q / 2.0);
		if (disk < 0) {
			cout << "Three real solutions: " << endl;
			if (q < 0) { fi = atan(sqrt(disk) / (-q / 2.0)); }
			else if (q == 0) { fi = pi / 2.0; }
			else { fi = (atan(sqrt(-disk) / (-q / 2.0))) + pi; }

			x1.real(2 * (sqrt(-p / 3.0)) * cos(fi / 3.0) - (b / 3.0 * a));
			x2.real(2 * (sqrt(-p / 3.0)) * cos((fi / 3.0) + (2.0 * pi / 3.0)) - (b / 3.0 * a));
			x3.real(2 * (sqrt(-p / 3.0)) * cos((fi / 3.0) + (4.0 * pi / 3.0)) - (b / 3.0 * a));
			cout << "x1= " << x1.real() << "\nx2= " << x2.real() << "\nx3= " << x3.real() << endl;

		}
		else if (disk == 0.0) {
			cout << "Two real solutions: " << endl;
			x1.real(2 * cbrt(-q / 2.0) - (b / 3.0 * a));
			x2.real(-cbrt(-q / 2.0) - (b / 3.0 * a));
			cout << "x1= " << x1.real() << "\nx2=  " << x2.real() << endl;

		}
		else {
			cout << "Three solutions: " << endl;
			double s = cbrt((-q / 2) + sqrt(disk));
			double t = cbrt((-q / 2) - sqrt(disk));
			x1.real(s + t - (b / 3 * a));
			x2.real(-0.5 * (s + t) - (b / 3.0 * a));
			x2.imag((sqrt(3.0) / 2.0) * (s - t));
			complex<double> x3(conj(x2));
			cout << "1 real solution: \n" << "x1 = " << x1.real() << "\n2 complex solutions: \n" << "x2 = " << x2.real() << " +(" << x2.imag() << ")i\n" << "x3 = " << x3.real() << " +(" << x3.imag() << ")i\n";

		}
	}
	else {
		cout << "Not a cubic equation. Try quadratic equation tool or check your coefficients\n";
	}
}
