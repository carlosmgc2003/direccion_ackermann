#include "Punto.h"

Punto::Punto(double r, double theta) {
	if (r > 0) {
		this->r = r;
	}
	if (theta >= 0 && theta < 2 * M_PI) {
		this->theta = theta;
	}
}

bool Punto::esta_izquierda() {
	return this->theta > M_PI_2 && this->theta < M_PI + M_PI_2;
}

bool Punto::esta_derecha() {
	return !esta_izquierda();
}

bool Punto::esta_adelante() {
	return this->theta >= 0 && this->theta <= M_PI;
}

bool Punto::esta_atras() {
	return !esta_adelante();
}