#include "ActionScene.h"



void ActionScene()
{
	cout << "FIRST PRACTICE\n1 - Quadratic equation\n2 - Triangle area\n3 - Distance between two points\n4 - Quadrangle area\n5 - Get letter's alphabet number from given word (english)\n6 - Cubical equation\n ";
	switch (ActionChooser())
	{


	case 1:
		//������� ����������� ���������
		cout << "ax^2 + bx + c = 0\n";
		QuadraticEquation();
		break;
	case 2:
		//������� ������������ �� ����������� ���� ����� 
		TriangleArea();
		break;
	case 3:
		//���������� ����� ����� �������
		Distance();
		break;
	case 4:
		//������� ���������������� �� ����������� �����
		AreaQuadrangle();
		break;
	case 5:
		//����� ����������� ������ ������ ����� ��������� ������ � ���������� ��������  
		GetWordsLettersNumber();
		break;
	case 6:
		//������� ����������� ���������
		cout << "ax^3 + bx^2 + cx + d = 0\n";
		CubicEquation();
		break;
		//case 7:
		//	//����������� �������� � ������� ���������� ����� �����
		//	BitWiseAddition();
		//	BitWiseSubtruction();


	}
}

