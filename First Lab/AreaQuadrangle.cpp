#include "AreaQuadrangle.h"

void AreaQuadrangle()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double  area_quadrangle;
	cout << "Enter first point(x1,y1): " << endl;
	cin >> x1 >> y1;
	cout << "Enter second point(x2,y2): " << endl;
	cin >> x2 >> y2;
	cout << "Enter third point(x3,y3): " << endl;
	cin >> x3 >> y3;
	cout << "Enter fourth point(x4,y4): " << endl;
	cin >> x4 >> y4;
	area_quadrangle = fabs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x4) * (y3 + y4) + (x4 - x1) * (y4 + y1)) / 2.0;
	if (area_quadrangle != 0) { cout << "Your quadrangle's area is " << area_quadrangle << endl; }
	else { cout << "Not a quadrangle. Try other coordinates." << endl; }
}

