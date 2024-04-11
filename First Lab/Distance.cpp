#include "Distance.h"

void Distance()
{
	double distance, x1, x2, z1, z2, y1, y2;
	cout << "Enter first point(x1,y1,z1): ";
	cin >> x1 >> y1 >> z1;
	cout << "Enter second point(x2,y2,z2): ";
	cin >> x2 >> y2 >> z2;

	distance = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0) + pow((z2 - z1), 2.0));
	if (distance != 0) { cout << "Distance between your points is " << distance << endl; }
	else { cout << "Oops. There is an only point. Try again" << endl; }
}
