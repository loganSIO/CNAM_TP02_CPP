#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

class Triangle {
public:

	Triangle(const Point& pointA, const Point& pointB, const Point& pointC);

	// Getters
	inline const Point getPointA() {
		return pointA;
	}
	inline const Point getPointB() {
		return pointB;
	}
	inline const Point getPointC() {
		return pointC;
	}


	// Setters
	inline void setPointA(const Point& _pointA) {
		pointA = _pointA;
	}
	inline void setPointB(const Point& _pointB) {
		pointB = _pointB;
	}
	inline void setPointC(const Point& _pointC) {
		pointC = pointC;
	}

	// Méthodes
	const float Base();
	const float Hauteur();
	const float Surface();
	const float Longueurs(const Point& p1, const Point& p2);
	const bool EstIsocele();
	const bool EstRectangle();
	const bool EstEquilateral();

private:
	// Attributs
	Point pointA, pointB, pointC;
};

#endif