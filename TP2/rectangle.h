#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class Rectangle {
	public:
		// Construteur
		Rectangle(const int longueur, const int largeur);

		// Destructeur
		~Rectangle();

		// Getters
		inline const int getLongueur();
		inline const int getLargeur();
		inline const Point getTopLeftCorner();

		// Setters
		inline int setLongueur();
		inline int setLargeur();
		inline const Point setTopLeftCorner();

		// Méthodes
		inline const void Afficher();
		inline const int Perimetre();
		inline const int Surface();

	private:

		// Attribut
		const int longueur;
		const int largeur;
		Point const topLeftCorner;
};

#endif
