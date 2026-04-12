#pragma once
#include "Figures.h"

class Rhombuses : public Figures
{
public:
	double GetRX1() const;
	
	double GetRY1() const;
	
	double GetRX2() const;
	
	double GetRY2() const;
	
	double GetRX3() const;
	
	double GetRY3() const;
	
	double GetRX4() const;
	
	double GetRY4() const;
	

	Rhombuses();
	Rhombuses(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	Rhombuses(const Rhombuses& r1);

	double GetPerimeter();

	double GetArea();

	


};

