﻿
#include <iostream>
#include <string>
#include <cmath>
#include <complex>

using namespace std;
const double pi = 3.141592653589793238463;

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
	if (case_num > 0 && case_num < 8) { return case_num; }
	else { cout << "Error.Try again \n"; return -1; }
}
static void BitWiseAddition() {
	string num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "\nEnter second number: ";
	cin >> num2;
	int maxlen = max(num1.length(), num2.length());
	num1 = string(maxlen - num1.length(), '0') + num1;
	num2 = string(maxlen - num2.length(), '0') + num2;

	string result = "";
	int residue = 0;
	for (int i = maxlen - 1; i >= 0; i--) {
		int bit_sum = (num1[i] - '0') + (num2[i] - '0') + residue;
		result = to_string(bit_sum % 10) + result;
		residue = bit_sum / 10;
	}

	if (residue) {
		result = to_string(residue) + result;
	}

	cout << "Bit wise addition result: " << result << endl;
}
//static void BitWiseSubtruction() {
//	string num1, num2;
//	cout << "Enter first number: ";
//	cin >> num1;
//	cout << "\nEnter second number: ";
//	cin >> num2;
//	int maxlen = max(num1.length(), num2.length());
//	num1 = string(maxlen - num1.length(), '0') + num1;
//	num2 = string(maxlen - num2.length(), '0') + num2;
//
//	string result = "";
//	int borrow = 0;
//	for (int i = maxlen - 1; i >= 0; i--) {
//		int diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
//		if (diff < 0) {
//			diff += 10;
//			borrow = 1;
//		}
//		else {
//			borrow = 0;
//		}
//		result = to_string(diff) + result;
//	}
//	
//	cout << result;
//}

static void CubicEquation() {
	double a, b, c, d;
	cout << "Enter a: \n";
	cin >> a;
	cout << "Enter b: \n"; 
	cin >> b;
	cout << "Enter c: \n"; 
	cin >> c;
	cout << "Enter d: \n"; 
	cin>> d;
	if (a!=0){
		complex <double>x1, x2, x3;
		double p;
		double q;
		double disk;
		double fi;
		p = (3.0 * a * c - b * b) / (3.0 * a * a);
		q = (-9.0 * a * b * c + 27.0 * a * a * d + 2.0 * b * b * b) / (27.0 * a * a * a);
		disk = (p / 3.0) * (p / 3.0) * (p / 3.0) + (q / 2.0) * (q / 2.0);
		if (disk < 0) {
			cout <<"Three real solutions: " << endl;
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
			x1.real( 2 * cbrt(-q / 2.0)  - (b / 3.0 * a));
			x2.real( - cbrt(-q / 2.0) - (b / 3.0 * a));
			cout << "x1= " << x1.real() << "\nx2=  " << x2.real() << endl;

		}
		else {
			cout << "Three solutions: " << endl;
			double s = cbrt((-q / 2) + sqrt(disk));
			double t = cbrt((-q / 2) - sqrt(disk));
			x1.real( s + t - (b / 3 * a));
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
static int GetAlphabeticOrderingNumber(char letter) {
	if (letter >= 'a' && letter <= 'z') {
		return letter - 'a' + 1;

	}
	else {
		return -1;
	}
}
static void GetWordsLettersNumber() {
	string word;
	cout << "Enter your word: " << endl;
	cin >> word;
	cout << "Your word's letters numbers are: ";
	for (int i = 0; i < word.length(); i++) {
		int number = GetAlphabeticOrderingNumber(tolower(word[i]));
		if (number != -1) {cout << number << " ";}
		else {cout << "Oops... Try another word, make sure u use english alphabet." << endl;}
	}
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
			cout << "Two real solutions:" << endl << "x1 = " << x1.real() << endl << "x2 = " << x2.real() << endl;
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
	cout << "FIRST PRACTICE\n1 - Quadratic equation\n2 - Triangle area\n3 - Distance between two points\n4 - Quadrangle area\n5 - Get letter's alphabet number from given word (english)\n6 - Cubical equation\n ";
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
	case 5:
		//Вывод порядкового номера каждой буквы введенной строки в английском алфавите  
		GetWordsLettersNumber();
		break;
	case 6:
		//Решение кубического уравнения
		cout << "ax^3 + bx^2 + cx + d = 0\n";
		CubicEquation();
		break;
	case 7:
		//Поразрядные операции с числами введенными ввиде строк
		BitWiseAddition();
		/*BitWiseSubtruction();*/


	}
}
int main() {
	ActionScene();
	
	
	
}

