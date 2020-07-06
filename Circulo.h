#pragma once
class Circulo
{
private:

	double pi = 3.141516;

public:

	Circulo(double _radio);
	~Circulo();

	double radio = 0;

	double Area();
	double Circunferencia();
};