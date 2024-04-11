#include "GetWordsLettersNumber.h"

void GetWordsLettersNumber()
{
	string word;
	cout << "Enter your word: " << endl;
	cin >> word;
	cout << "Your word's letters numbers are: ";
	for (int i = 0; i < word.length(); i++) {
		int number = GetAlphabeticOrderingNumber(tolower(word[i]));
		if (number != -1) { cout << number << " "; }
		else { cout << "Oops... Try another word, make sure u use english alphabet." << endl; }
	}
}
