#pragma once


namespace NameSpace {


	/// <summary>
	/// struct describing a rectangle
	/// </summary>
	struct Rectangle {
		float sideA;
		float sideB;
		float area;
		bool checkArea = false;
		float parameter;
		bool checkParameter = false;
	};

	/// <summary>
	/// struct describing a circle
	/// </summary>
	struct Circle {
		float radius;
		float area;
		bool checkArea = false;
		float parameter;
		bool checkParameter = false;
	};


	float recArea(float a, float b);
	float recArea(NameSpace::Rectangle& r);
	float cirArea(float r);
	float cirArea(NameSpace::Circle& c);
	float recParam(float a, float b);
	float recParam(NameSpace::Rectangle& r);
	float cirParam(float r);
	float cirParam(NameSpace::Circle& c);
	void resize(NameSpace::Rectangle& r, int m = 2);
	void resize(NameSpace::Circle& c, int m = 2);
	void printOut(NameSpace::Rectangle r);
	void printOut(NameSpace::Circle c);
}


