
#include <iostream>
#include "../headers/Header.h"

/// <summary>
/// claculates rectangle area if the area is not negative
/// </summary>
/// <param name="a">one of the sides of the rectangle</param>
/// <param name="b">the other side of the rectangle</param>
/// <returns>the area of the rectangles if it's not negative, else return -1</returns>
float NameSpace::recArea(float a, float b) 
{
	float area = a * b;
	if (area >= 0) 
		return area;
	else {
		std::cout << "the area can not be less then zero ( current answer is " << area << " )" << std::endl;
		return -1;
	}
}

/// <summary>
/// calculates the area of the rectangle if it has not been calculated
/// </summary>
/// <param name="r">reference to the rectangle struct</param>
/// <returns>the area member of the referenced reactangle</returns>
float NameSpace::recArea(NameSpace::Rectangle &r) {
	if (r.checkArea) {
		return r.area;
	}
	else {
		float area = NameSpace::recArea(r.sideA, r.sideB);
		if (area != -1) {
			r.area = area;
			r.checkArea = true;
			return r.area;
		}		
	}
}


/// <summary>
/// claculates circle area if the area is not negative
/// </summary>
/// <param name="r">radius of the rectangle</param>
/// <returns>returns the area of the circle if it's not negative, else return -1</returns>
float NameSpace::cirArea(float r) {

	float area = (float)3.14 * (r * r);
	if (area >= 0) 
		return area;
	else {
		std::cout << "the area can not be less then zero ( current answer is " << area << " )" << std::endl;
		return -1;
	}
}


/// <summary>
/// calculates the area of the circle if it has not been calculated
/// </summary>
/// <param name="c">reference to the circle struct</param>
/// <returns>returns the area member of the referenced circle</returns>
float NameSpace::cirArea(NameSpace::Circle &c) 
{
	if (c.checkArea) {
		return c.area;
	}
	else {
		float area = NameSpace::cirArea(c.radius);
		if (area != -1) {
			c.area = area;
			c.checkArea = true;
			return c.area;
		}
	}
}


/// <summary>
/// claculates rectangle parameter if the area is not negative
/// </summary>
/// <param name="a">one of the sides of the rectangle</param>
/// <param name="b">the other side of the rectangle</param>
/// <returns>returns the parameter of the rectangle if it's not negative, else return -1</returns>
float NameSpace::recParam(float a, float b) 
{
	float param = 2 * (a + b);
	if (param >= 0) 
		return param;
	else {
		std::cout << "the parameter can not be less then zero ( current answer is " << param << " )" << std::endl;
		return -1;
	}
}


/// <summary>
/// calculates the parameter of the rectangle if it has not been calculated
/// </summary>
/// <param name="r">reference to the rectangle struct</param>
/// <returns>returns the parameter member of the referenced reactangle</returns>
float NameSpace::recParam(NameSpace::Rectangle &r) 
{
	if (r.checkParameter) {
		return r.parameter;
	}
	else {
		float param = NameSpace::recParam(r.sideA, r.sideB);
		if (param != -1) {
			r.parameter = param;
			r.checkParameter = true;
			return r.parameter;
		}
	}
}


/// <summary>
/// claculates circle parameter if the area is not negative
/// </summary>
/// <param name="r">radius of the circle</param>
/// <returns>returns the parameter of the circle if it's not negative, else return -1</returns>
float NameSpace::cirParam(float r) 
{
	float param = 2 * (float)3.14 * r;
	if (param >= 0) 
		return param;
	else {
		std::cout << "the parameter can not be less then zero ( current answer is " << param << " )" << std::endl;
		return -1;
	}
}


/// <summary>
/// calculates the parameter of the circle if it has not been calculated
/// </summary>
/// <param name="c">reference to the circle struct</param>
/// <returns>returns the parameter member of the referenced circle</returns>
float NameSpace::cirParam(NameSpace::Circle &c) 
{
	if (c.checkParameter) {
		return c.parameter;
	}
	else {
		float param = NameSpace::cirParam(c.radius);
		if (param != -1) {
			c.parameter = param;
			c.checkParameter = true;
			return c.parameter;
		}
	}
}


/// <summary>
/// resize the rectangle
/// </summary>
/// <param name="r">rectangle struct</param>
/// <param name="m">multiplication constant</param>
void NameSpace::resize(NameSpace::Rectangle &r, int m) 
{
	if (m < 0) {
		std::cout << "the resize value cant be less than 0 (negative)" << std::endl;
	}
	else {
		r.sideA *= m;
		r.sideB *= m;
		r.checkArea = false;
		r.checkParameter = false;
		r.area = NameSpace::recArea(r);
		r.parameter = NameSpace::recParam(r);
	}
}


/// <summary>
/// resize the circle
/// </summary>
/// <param name="r">circle struct</param>
/// <param name="m">multiplication constant</param>
void NameSpace::resize(NameSpace::Circle &c, int m) 
{
	if (m < 0) {
		std::cout << "the resize value cant be less than 0 (negative)" << std::endl;
	}
	else {
		c.radius *= m;
		c.checkArea = false;
		c.checkParameter = false;
		c.area = NameSpace::cirArea(c);
		c.parameter = NameSpace::cirParam(c);
	}
}


/// <summary>
/// prints the information of the rectangle
/// </summary>
/// <param name="r">rectangle struct</param>
void NameSpace::printOut(NameSpace::Rectangle r) 
{
	std::cout << "rectangle side a: " << r.sideA << std::endl;
	std::cout << "rectangle side b: " << r.sideB << std::endl;
	std::cout << "rectangle area: " << r.area << std::endl;
	std::cout << "rectangle parameter: " << r.parameter << std::endl;
}


/// <summary>
/// prints the information of the circle
/// </summary>
/// <param name="c">circle struct</param>
void NameSpace::printOut(NameSpace::Circle c) 
{
	std::cout << "circle radius: " << c.radius << std::endl;
	std::cout << "circle area: " << c.area << std::endl;
	std::cout << "circle perimiter: " << c.parameter << std::endl;
}
