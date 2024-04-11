#include "TriangleArea.h"

void TriangleArea()
{
	double area, x1, x2, x3, y1, y2, y3;
	cout << "First point (x1,y1): " << endl;
	cin >> x1 >> y1;
	cout << "Second point (x2,y2): " << endl;
	cin >> x2 >> y2;
	cout << "Third point (x3,y3): " << endl;
	cin >> x3 >> y3;

	area = fabs(((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2.0);
	if (area != 0) { cout << "Yours triangle's area is " << area << endl; }
	else { cout << "Not a triangle. Try again with other points " << endl; }
}
