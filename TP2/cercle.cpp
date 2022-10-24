#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

#include "cercle.h"

Cercle::Cercle(const int diametre)
	: diametre(diametre)
{}

const float Cercle::Perimetre() {
	return (2 * M_PI * (diametre / 2));
}

const float Cercle::Surface() {
	return (pow(diametre / 2, 2) * M_PI);
}

const bool Cercle::EstSurCercle(Point p) {
	return sqrt(pow(p.x - centreCercle.x, 2) + pow(p.y - centreCercle.y, 2)) ==  diametre / 2;
}