#include "ActionScene.h"

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

int main() 
{
	ActionScene();
}

