
#include <iostream>
#include <string>
#include <cmath>
#include <complex>

using namespace std;
static int ActionChooser() {
	string case_num_input;
	int case_num;

	cout << "Choose your case: ";
	cin >> case_num_input;

	case_num = stoi(case_num_input);
	try
	{
		case_num = stoi(case_num_input);
	}
	catch (invalid_argument)
	{
		// Можно вводить только числа
		cout << "Only numbers are allowed! \n";
		case_num = -1;
	}
	catch (...)
	{
		//Если будет выброшено какое-то исключение, которое не обработано выше, то говорим, что возникла неизвестная ошибка
		cout << "Unknown error! \n";
		case_num = -1;

	}
	if (case_num > 0 && case_num < 6) { return case_num; }
	else { cout << "Error.Try again \n"; return -1; }
}
static void AreaQuadrangle() {
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
static void Distance() {
	double distance,x1,x2,z1,z2,y1,y2;
	cout << "Enter first point(x1,y1,z1): ";
	cin >> x1 >> y1 >> z1;
	cout << "Enter second point(x2,y2,z2): ";
	cin >> x2 >> y2 >> z2;

	distance = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0)+ pow((z2 - z1), 2.0));
	if (distance != 0) { cout << "Distance between your points is " << distance << endl; }
	else { cout << "Oops. There is an only point. Try again" << endl; }
}
static void QuadraticEquation() {
	double a, b, c;
	complex <double> x1;
	complex <double> x2;
	cout << "a = " ;
	cin >> a;
	cout << "b= " ;
	cin >> b;
	cout << "c= " ;
	cin >> c;
	if (a == 0.0) {
		cout << "not a quadratic equation" << endl;
		x1 = -c / b;
		cout << "the only solution is x= " << x1.real() << endl;
	}
	else { 
		
		double discriminant = (pow(b, 2.0) - 4 * a * c);
		if (discriminant> 0) {
			
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			x2 = (-b - sqrt(discriminant)) / (2 * a);
			cout << "Two real solutions:"<<endl<<"x1 = " << x1.real() << endl << "x2 = " << x2.real()<< endl;
		}
		else if (discriminant==0.0){ 
			double x = (-b / (2 * a));
			cout << "The only solution is x= "<<x<<endl; }
		else { 
			x1.real(-b / (2 * a));
			x1.imag(sqrt(-discriminant) / (2 * a));
			x2 = conj(x1);
			
			cout << "Two imaginal solutions:" << endl << "x1 = " << x1.real() <<" +("<<x1.imag()<<")i" << endl << "x2 = " << x2.real() << " +(" << x2.imag() << ")i"<< endl;
			

		
		}
	
	}
}
static void TriangleArea() {
	double area,x1,x2,x3,y1,y2,y3;
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
static void ActionScene() {
	cout << "FIRST PRACTICE\n1 - Quadratic equation\n2 - Triangle area\n3 - Distance between two points\n4 - Quadrangle area\n ";
	switch (ActionChooser())
	{


	case 1:
		//Решение квадратного уравнения
		cout << "ax^2 + bx + c = 0\n";
		QuadraticEquation();
		break;
	case 2:
		//Площадь треугольника по координатам трех точек 
		TriangleArea();
		break;
	case 3:
		//Расстояние между двумя точками
		Distance();
		break;
	case 4:
		//Площадь четырехугольника по координатам точек
		AreaQuadrangle();
		break;
	
	}
}
int main() {
	ActionScene();
}

