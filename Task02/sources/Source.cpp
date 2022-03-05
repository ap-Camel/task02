
#include <iostream>
#include "../headers/Header.h"

/// <summary>
/// claculates the area of the rectangle using sides as input
/// </summary>
/// <param name="a">side a of the rectangle</param>
/// <param name="b">side b of the rectangle</param>
/// <returns>the area of the rectangle</returns>
float NameSpace::recArea(float a, float b) {
	return a * b;
}


/// <summary>
/// caculates the area of rectangle using rectangle struct
/// </summary>
/// <param name="r">rectangle struct</param>
/// <returns>the area of rectangle</returns>
float NameSpace::recArea(NameSpace::Rectangle &r) {
	float area = recArea(r.sideA, r.sideB);
	if (area >= 0) {
		r.checkArea = true;
		return area;
	}
	else {
		std::cout << "area can not be less than 0" << std::endl;
		r.checkArea = false;
	}

	return 0;
	//return NameSpace::recArea(r.sideA, r.sideB);
}


/// <summary>
/// claculates the area of the circle using radius as input
/// </summary>
/// <param name="r">radius of the rectangle</param>
/// <returns>the area of the circle</returns>
float NameSpace::cirArea(float r) {
	return 3.14 * (r * r);
}


/// <summary>
/// claculates the area of the circle using circle struct
/// </summary>
/// <param name="c">circle struct</param>
/// <returns></returns>
float NameSpace::cirArea(NameSpace::Circle &c) {
	float area = cirArea(c.radius);
	if (area >= 0) {
		c.checkArea = true;
		return area;
	}
	else {
		std::cout << "area can not be less than 0" << std::endl;
		c.checkArea = false;
	}

	return 0;
	//return NameSpace::cirArea(c.radius);
}


/// <summary>
/// claculates the perimiter of the rectangle using sides as input
/// </summary>
/// <param name="a">side a</param>
/// <param name="b">side b</param>
/// <returns>the perimiter of a rectangle</returns>
float NameSpace::recPerim(float a, float b) {
	return 2 * (a + b);
}


/// <summary>
/// claculates the perimiter of the rectangle using rectangle struct as input
/// </summary>
/// <param name="r">rectangle struct</param>
/// <returns>the perimiter of the rectangle</returns>
float NameSpace::recPerim(NameSpace::Rectangle &r) {
	float perimiter = recPerim(r.sideA, r.sideB);
	if (perimiter >= 0) {
		r.checkPerimeter = true;
		return perimiter;
	}
	else {
		std::cout << "perimiter can not be less than 0" << std::endl;
		r.checkPerimeter = false;
	}

	return 0;
	//return NameSpace::recPerim(r.sideA, r.sideB);
}


/// <summary>
/// claculates the perimiter of the circle using radius as input
/// </summary>
/// <param name="r">the circle radius</param>
/// <returns>the perimiter of a circle</returns>
float NameSpace::cirPerim(float r) {
	return 2 * 3.14 * r;
}


/// <summary>
/// claculates the perimiter of the circle using circle struct as input
/// </summary>
/// <param name="c">circle struct</param>
/// <returns></returns>
float NameSpace::cirPerim(NameSpace::Circle &c) {
	float perimiter = cirPerim(c.radius);
	if (perimiter >= 0) {
		c.checkPerimeter = true;
		return perimiter;
	}
	else {
		std::cout << "perimiter can not be less than 0" << std::endl;
		c.checkPerimeter = false;
	}

	return 0;
	//return NameSpace::cirPerim(c.radius);
}


/// <summary>
/// resize the rectangle
/// </summary>
/// <param name="r">rectangle struct</param>
/// <param name="m">multiplication constant</param>
void NameSpace::resize(NameSpace::Rectangle &r, int m = 2) {
	if (m < 0) {
		std::cout << "the resize value cant be less than 0" << std::endl;
	}
	else {
		r.sideA *= m;
		r.sideB *= m;
		r.area = NameSpace::recArea(r);
		r.perimeter = NameSpace::recPerim(r);
	}
}


/// <summary>
/// resize the circle
/// </summary>
/// <param name="r">circle struct</param>
/// <param name="m">multiplication constant</param>
void NameSpace::resize(NameSpace::Circle &c, int m = 2) {
	if (m < 0) {
		std::cout << "the resize value cant be less than 0" << std::endl;
	}
	else {
		c.radius *= m;
		c.area = NameSpace::cirArea(c);
		c.perimeter = NameSpace::cirPerim(c);
	}
}


/// <summary>
/// prints the information of the rectangle
/// </summary>
/// <param name="r">rectangle struct</param>
void NameSpace::printOut(NameSpace::Rectangle r) {
	std::cout << "rectangle side a: " << r.sideA << std::endl;
	std::cout << "rectangle side b: " << r.sideB << std::endl;
	std::cout << "rectangle area: " << r.area << std::endl;
	std::cout << "rectangle perimiter: " << r.perimeter << std::endl;
}


/// <summary>
/// prints the information of the circle
/// </summary>
/// <param name="c">circle struct</param>
void NameSpace::printOut(NameSpace::Circle c) {
	std::cout << "circle radius: " << c.radius << std::endl;
	std::cout << "circle area: " << c.area << std::endl;
	std::cout << "circle perimiter: " << c.perimeter << std::endl;
}
