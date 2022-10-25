#include <iostream>

#include "point.h"
#include "rectangle.h"
#include "cercle.h"
#include "triangle.h"

int main()
{
	Rectangle r1(20, 30);
	Rectangle r2(1, 2);
	Cercle c1(8, { -1, 0 });
	Triangle t1({1, 2}, {1, 2}, {1, 2});

	std::cout << "Perimetre: " << r1.Perimetre() << std::endl;
	std::cout << "Surface: " << r1.Surface() << std::endl;
	std::cout << r1.PlusGrandPerimetre(r2) << std::endl;
	std::cout << r1.PlusGrandeSurface(r2) << std::endl;

	std::cout << c1.Perimetre() << std::endl;
	std::cout << c1.Surface() << std::endl;
	std::cout << c1.EstSurCercle({0, 9}) << std::endl;
	std::cout << c1.EstDansCercle({ 0, 8 }) << std::endl;

	std::cout << t1.Base() << std::endl;
	std::cout << t1.Surface() << std::endl;
	std::cout << t1.Hauteur() << std::endl;
	std::cout << t1.EstIsocele() << std::endl;
	std::cout << "toto" << std::endl;
	std::cout << t1.EstRectangle() << std::endl;
	std::cout << t1.EstEquilateral() << std::endl;
}