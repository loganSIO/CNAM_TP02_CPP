#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class Rectangle {
	public:
		// Construteur
		Rectangle(const int longueur, const int largeur);

		// Destructeur
		//~Rectangle();

		// Getters
		inline const int getLongueur() {
			return longueur;
		}
		inline const int getLargeur() {
			return largeur;
		}
		inline const Point getTopLeftCorner() {
			return topLeftCorner;
		}

		// Setters
		inline void setLongueur(const int longueuR) {
			longueur = longueuR;
		}
		inline void setLargeur(const int largeuR) {
			largeur = largeuR;
		}
		inline void setTopLeftCorner(const Point &topLeftCorneR) {
			topLeftCorner = topLeftCorneR;
		}

		// Méthodes
		inline const void Afficher();
		const int Perimetre();
		const int Surface();
		const bool PlusGrandPerimetre(Rectangle r2);
		const bool PlusGrandeSurface(Rectangle r2);

	private:
		// Attributs
		int longueur;
		int largeur;
		Point topLeftCorner;
};

#endif