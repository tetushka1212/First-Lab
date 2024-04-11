#include "GetAlphOrdNum.h"

int GetAlphabeticOrderingNumber(char letter)
{
	if (letter >= 'a' && letter <= 'z') 
	{
		return letter - 'a' + 1;

	}
	else 
	{
		return -1;
	}
}
