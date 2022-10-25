#ifndef CERCLE_H
#define CERCLE_H

#include "point.h"

class Cercle {
	public:

		Cercle(const int diametre, const Point centreCercle);

		// Getters
		inline const int getDiametre() {
			return diametre;
		}
		inline const Point getCentreCercle() {
			return centreCercle;
		}

		// Setters
		inline void setDiametre(const int diametrE) {
			diametre = diametrE;
		}
		inline void setCentreCercle(const Point &centreCerclE) {
			centreCercle = centreCerclE;
		}

		// Méthodes
		const float Perimetre();
		const float Surface();
		const bool EstSurCercle(const Point p);
		const bool EstDansCercle(const Point p);

	private:
		// Attributs
		int diametre;
		Point centreCercle;
};

#endif