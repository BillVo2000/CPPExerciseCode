#include <stdio.h>

int main()
{
	float c, f;
	printf("input Fahrenheit degree: "); scanf ("%f", &f);
	c = (f - 32) / 1.8;
	printf ("%.0fF = %.2fC",f,c);

	return 0;
}
