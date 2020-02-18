#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <cmath>

#include "Punto.h"

constexpr auto CENTRO_1 = 2.0;
constexpr auto CENTRO_2 = -2.0;
constexpr auto ALPHA_1 = 2.0;
constexpr auto ALPHA_2 = -M_PI;

Punto centro_1 = { CENTRO_1, ALPHA_1 };
Punto centro_2 = { CENTRO_2, ALPHA_2 };

bool pertenece_punto(Punto &centro_circ, Punto &dato) {
	// r^2 + c^2 - 2 * r * c * cos(theta - alpha) >= a^2
	// Si esto es True, Pertenece a la circunf, caso contrario No Pertenece
	double calculo = pow(dato.r, 2) + pow(centro_circ.r, 2) - 2 * dato.r * centro_circ.r * cos(dato.theta - centro_circ.theta);
	if (calculo < pow(centro_circ.r, 2))
		return true;
	else
		return false;
}

int main(int argc, char* argv[]) {
	if (argc == 3) {
		Punto dato = { strtod(argv[1], NULL), strtod(argv[2], NULL) };
		if (pertenece_punto(centro_1, dato) ||
			pertenece_punto(centro_2, dato))
			printf("Pertenece");
		else
			printf("No pertence");
		return 0;
	}
	else
		return -1;
}