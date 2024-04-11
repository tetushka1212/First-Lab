#include "ActionScene.h"



void ActionScene()
{
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

