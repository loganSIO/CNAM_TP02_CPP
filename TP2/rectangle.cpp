#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle(const int longueur, const int largeur)
	: longueur(longueur), largeur(largeur)
{
}

const int Rectangle::Perimetre() 
{
	return (longueur + largeur) * 2;
}

const int Rectangle::Surface()
{
	return longueur * largeur;
}

const bool Rectangle::PlusGrandPerimetre(Rectangle r2)
{
	return r2.Perimetre() > Perimetre();
}

const bool Rectangle::PlusGrandeSurface(Rectangle r2)
{
	return r2.Surface() > Surface();
}