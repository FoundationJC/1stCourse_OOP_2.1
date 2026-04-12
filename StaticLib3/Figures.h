#pragma once
class Figures
{
private:

	double x1, y1;
	double x2, y2;
	double x3, y3;
	double x4, y4;

protected:

    double Distance(double x1, double y1, double x2, double y2);

public:

    Figures();
    Figures(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3, double _x4, double _y4);
    Figures(const Figures& f1);

    double GetSideLength(int sideNumber);

    double GetX1() const;
    double GetY1() const;
    double GetX2() const;
    double GetY2() const;
    double GetX3() const;
    double GetY3() const;
    double GetX4() const;
    double GetY4() const;

};

