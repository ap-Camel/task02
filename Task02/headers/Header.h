#pragma once


namespace NameSpace {


	struct Rectangle {
		float sideA;
		float sideB;
		float area;
		bool checkArea;
		float perimeter;
		bool checkPerimeter;
	};

	struct Circle {
		float radius;
		float area;
		bool checkArea;
		float perimeter;
		bool checkPerimeter;
	};


	float recArea(float a, float b);
	float recArea(NameSpace::Rectangle& r);
	float cirArea(float r);
	float cirArea(NameSpace::Circle& c);
	float recPerim(float a, float b);
	float recPerim(NameSpace::Rectangle& r);
	float cirPerim(float r);
	float cirPerim(NameSpace::Circle& c);
	void resize(NameSpace::Rectangle& r, int m);
	void resize(NameSpace::Circle& c, int m);
	void printOut(NameSpace::Rectangle r);
	void printOut(NameSpace::Circle c);
}


