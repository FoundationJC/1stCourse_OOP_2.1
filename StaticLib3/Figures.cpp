#include "pch.h"
#include "Figures.h"
#include <cmath>
#include <stdexcept>




Figures::Figures()
{
    x1 = 0; y1 = 0;
    x2 = 0; y2 = 0;
    x3 = 0; y3 = 0;
    x4 = 0; y4 = 0;
}

Figures::Figures(const Figures& f1)
{
    x1 = f1.x1; y1 = f1.y1;
    x2 = f1.x2; y2 = f1.y2;
    x3 = f1.x3; y3 = f1.y3;
    x4 = f1.x4; y4 = f1.y4;
}

Figures::Figures(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3, double _x4, double _y4) :
    x1(_x1), y1(_y1),
    x2(_x2), y2(_y2),
    x3(_x3), y3(_y3),
    x4(_x4), y4(_y4)
{

}

double Figures::Distance(double x1, double y1, double x2, double y2)
{
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double Figures::GetSideLength(int sideNumber)
{
    switch (sideNumber)
    {
    case 1: return Distance(x1, y1, x2, y2);
    case 2: return Distance(x2, y2, x3, y3);
    case 3: return Distance(x3, y3, x4, y4);
    case 4: return Distance(x4, y4, x1, y1);
    default: throw std::invalid_argument("Invalid side number");
    }
}

double Figures::GetX1() const
{
    return x1;
}
double Figures::GetY1() const
{
    return y1;
}
double Figures::GetX2() const
{
    return x2;
}
double Figures::GetY2() const
{
    return y2;
}
double Figures::GetX3() const
{
    return x3;
}
double Figures::GetY3() const
{
    return y3;
}
double Figures::GetX4() const
{
    return x4;
}
double Figures::GetY4() const
{
    return y4;
}