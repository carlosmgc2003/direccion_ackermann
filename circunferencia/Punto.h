#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
class Punto
{
public:
	double r = 1;
	double theta = M_PI_2;
	Punto(double, double);
	bool esta_izquierda();
	bool esta_derecha();
	bool esta_adelante();
	bool esta_atras();
};

