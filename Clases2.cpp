#include <iostream>
#include "Circulo.h"
using namespace std;

int main()
{
	double area;
	double circunferencia;

	Circulo* a = new Circulo(5);
	area = a->Area();
	circunferencia = a->Circunferencia();
	cout << "El area del circulo es de: " << area << endl;
	cout << "La circunferencia del circulo es de: " << circunferencia << endl;

	return 0;
}

