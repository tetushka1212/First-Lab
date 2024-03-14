
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
	cout << 'a= ' << endl;
	cin >> a;
	cout << 'b= ' << endl;
	cin >> b;
	cout << 'c= ' << endl;
	cin >> c;
	if (a == 0.0) {
		cout << "not a quadratic equation" << endl;

	}
}
void ActionScene() {
	cout << "FIRST PRACTICE\n1 - Quadratic equation\n ";
	switch (ActionChooser())
	{


	case 1:
		//Решение квадратного уравнения
		cout << "ax^2 + bx + c = 0\n";

		break;
	}
}
int main() {
	ActionScene();
}

