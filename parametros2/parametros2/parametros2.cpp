// parametros2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
//Prototipo de funcion
void intercambio(int*, int*);

int main()
{
	int a, b;
	cout << "Introduce primer valor: ";
	cin >> a;
	cout << "Introduce segundo valor: ";
	cin >> b;
	cout << endl;
	cout << "Valor de a: " << a << " valor de b: " << b << endl,
	intercambio(&a, &b);
	cout << endl << "Despues del intercambio: " << endl << endl;
	cout << "Valor de la a: " << a << "Valor de b: " << b << endl;
	system("pause");
	return 0;
}
void intercambio(int* charchos, int* clean)
{
	int z;
	z = *charchos;
	*charchos = *clean;
	*clean = z;
}