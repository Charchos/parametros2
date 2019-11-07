// operadores logicos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float x, y;
	printf("Ingrese el valor de x: ");
	scanf("%f",&x);
	if (x< 0 || x >50) 
	{
		y = 0;
	}
	else if (x<= 10) 
	{
		y = 4 / x;
	}
	else if (x <= 25)
	{
		y = pow(x, 3) + pow(x, 3) - 18;
	}
	printf("\n\n x= %5.2f \t y= %5.2f", x, y);
	return 0;

}
