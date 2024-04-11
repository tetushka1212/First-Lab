#include "ActionChooser.h"

int ActionChooser()
{
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
		// ����� ������� ������ �����
		cout << "Only numbers are allowed! \n";
		case_num = -1;
	}
	catch (...)
	{
		//���� ����� ��������� �����-�� ����������, ������� �� ���������� ����, �� �������, ��� �������� ����������� ������
		cout << "Unknown error! \n";
		case_num = -1;

	}
	if (case_num > 0 && case_num < 7) { return case_num; }
	else { cout << "Error.Try again \n"; return -1; }
}
