
#include "QuadraticEquation.h"
#include "TriangleArea.h"
#include "CubicEquation.h"
#include "Distance.h"
#include "AreaQuadrangle.h"
#include "GetWordsLettersNumber.h"



//static void BitWiseAddition() {
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
//	int residue = 0;
//	for (int i = maxlen - 1; i >= 0; i--) {
//		int bit_sum = (num1[i] - '0') + (num2[i] - '0') + residue;
//		result = to_string(bit_sum % 10) + result;
//		residue = bit_sum / 10;
//	}
//
//	if (residue) {
//		result = to_string(residue) + result;
//	}
//
//	cout << "Bit wise addition result: " << result << endl;
//}
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
	//case 7:
	//	//Поразрядные операции с числами введенными ввиде строк
	//	BitWiseAddition();
	//	BitWiseSubtruction();


	}
}
int main() {
	ActionScene();
	
	
	
}

