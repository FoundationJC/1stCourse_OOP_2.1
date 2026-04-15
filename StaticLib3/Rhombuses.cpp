#include "Rhombuses.h"



Rhombuses::Rhombuses() : Figures() {}
Rhombuses::Rhombuses(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) : Figures(x1, y1, x2, y2, x3, y3, x4, y4) {}
Rhombuses::Rhombuses(const Rhombuses& r1) : Figures(r1) {}

double Rhombuses::GetRX1() const
{
	return GetX1();
}
double Rhombuses::GetRY1() const
{
	return GetY1();
}
double Rhombuses::GetRX2() const
{
	return GetX2();
}
double Rhombuses::GetRY2() const
{
	return GetY2();
}
double Rhombuses::GetRX3() const
{
	return GetX3();
}
double Rhombuses::GetRY3() const
{
	return GetY3();
}
double Rhombuses::GetRX4() const
{
	return GetX4();
}
double Rhombuses::GetRY4() const
{
	return GetY4();
}

double Rhombuses::GetPerimeter()
{
	return GetSideLength(1) + GetSideLength(2) +
		GetSideLength(3) + GetSideLength(4);
}

double Rhombuses::GetArea()
{
	double d1 = Distance(GetX1(), GetY1(), GetX3(), GetY3());
	double d2 = Distance(GetX2(), GetY2(), GetX4(), GetY4());

	return (d1 * d2) / 2.0;
}