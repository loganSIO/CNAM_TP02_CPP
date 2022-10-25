#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

#include "cercle.h"

Cercle::Cercle(const int diametre, const Point centreCercle)
	: diametre(diametre), centreCercle(centreCercle)
{}

const float Cercle::Perimetre() {
	return (M_PI * diametre);
}

const float Cercle::Surface() {
	return (pow(diametre / 2, 2) * M_PI);
}

const bool Cercle::EstSurCercle(Point p) {
	return sqrt(pow(p.x - centreCercle.x, 2) + pow(p.y - centreCercle.y, 2)) ==  diametre / 2;
}

const bool Cercle::EstDansCercle(Point p) {
	return sqrt(pow(p.x - centreCercle.x, 2) + pow(p.y - centreCercle.y, 2)) < diametre / 2;
}