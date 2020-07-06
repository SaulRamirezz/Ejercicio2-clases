#include "Circulo.h"
#include <math.h>
#include <iostream>

Circulo::Circulo(double _radio)
{
	radio = _radio;
}

Circulo::~Circulo()
{
	std::cout << "Destructor" << std::endl;
}

double Circulo::Area()
{
	return pi * pow(radio, 2);
}

double Circulo::Circunferencia()
{
	return (pi * 2) * radio;
}
