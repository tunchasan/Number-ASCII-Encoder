#include "Math.h"

int Math::OBEB(int n1, int n2)
{
	static int greaterNumber;

	if (n1 > n2)
		greaterNumber = n1;
	else
		greaterNumber = n2;

	for (greaterNumber; greaterNumber > 0; greaterNumber--) {

		if ((n1%greaterNumber == 0) && (n2%greaterNumber == 0)) {

			return greaterNumber; // Returns the obeb for given numbers
		}
	}

	return -1;
}

int Math::MOD(int n1, int n2)
{
	return n1 % n2; // Returns mod for given numbers
}

int Math::MAX(int n1, int n2)
{
	return n1 > n2 ? n1 : n2; // Returns greatest number
}
