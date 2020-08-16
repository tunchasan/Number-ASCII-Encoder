#include "Math.h"

int Math::obebCalculater(int n1, int n2)
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
}
