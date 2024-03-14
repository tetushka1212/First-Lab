
#include <iostream>
#include <string>
#include <cmath>
#include <complex>

using namespace std;
int ActionChooser() {
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
void QuadraticEquation() {
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
void ActionScene() {
	cout << "FIRST PRACTICE\n1 - Quadratic equation\n ";
	switch (ActionChooser())
	{


	case 1:
		//Решение квадратного уравнения
		cout << "ax^2 + bx + c = 0\n";
		QuadraticEquation();
		break;
	}
}
int main() {
	ActionScene();
}

