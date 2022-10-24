#include <iostream>

#include "point.h"
#include "rectangle.h"
#include "cercle.h"

int main()
{
	Rectangle r1(20, 30);
	Rectangle r2(1, 2);
	std::cout << "Perimetre: " << r1.Perimetre() << std::endl;
	std::cout << "Surface: " << r1.Surface() << std::endl;
	std::cout << r1.PlusGrandPerimetre(r2) << std::endl;
	std::cout << r1.PlusGrandeSurface(r2) << std::endl;
	Cercle c1(18);
	std::cout << c1.Perimetre() << std::endl;
	std::cout << c1.Surface() << std::endl;
	Point p(21, 6);
	std::cout << c1.EstSurCercle(p) << std::endl;
}