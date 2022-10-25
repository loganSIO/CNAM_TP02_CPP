#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

#include "triangle.h"

Triangle::Triangle(const Point& pointA, const Point& pointB, const Point& pointC)
	: pointA(pointA), pointB(pointB), pointC(pointC)
{}

// Retourne la plus longue distance entre deux points
const float Triangle::Base() {
	const float distanceAB = Longueurs(pointA, pointB);
	const float distanceAC = Longueurs(pointA, pointC);
	const float distanceBC = Longueurs(pointB, pointC);

	if (distanceAB > distanceAC && distanceAB > distanceBC) {
		return distanceAB;
	}
	else if (distanceAC > distanceAB && distanceAC > distanceBC) {
		return distanceAC;
	}
	return distanceBC;
}

// Calcul de la hauteur avec la formule de Héron
const float Triangle::Hauteur() {
	std::cout << "toto" << std::endl;
	return (2 * Surface() / Base());
}

const float Triangle::Surface() {
	const float distanceAB = Longueurs(pointA, pointB);
	const float distanceAC = Longueurs(pointA, pointC);
	const float distanceBC = Longueurs(pointB, pointC);
	const float perimetre = (distanceAB + distanceAC + distanceBC);
	const float d = perimetre / 2;

	const float a = sqrt(d * (d - distanceAB) * (d - distanceAC) * (d - distanceBC));

	return a;
}

const float Triangle::Longueurs(const Point& p1, const Point& p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
