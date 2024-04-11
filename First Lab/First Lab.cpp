
#include <iostream>
#include <string>
#include <cmath>
#include <complex>
#include "QuadraticEquation.h"
#include "TriangleArea.h"
#include "CubicEquation.h"
#include "Distance.h"

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

