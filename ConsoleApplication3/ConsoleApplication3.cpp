// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../StaticLib3/Figures.h"
#include "../StaticLib3/Rhombuses.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    try
    {
        cout << "=== RHOMBUS DATA ===" << endl;

        Rhombuses r = Rhombuses(
            0, 0,
            3, 0,
            4, 2,
            1, 2
        );






        cout << "X1 = " << r.GetRX1() << ", Y1 = " << r.GetRY1() << endl;
        cout << "X2 = " << r.GetRX2() << ", Y2 = " << r.GetRY2() << endl;
        cout << "X3 = " << r.GetRX3() << ", Y3 = " << r.GetRY3() << endl;
        cout << "X4 = " << r.GetRX4() << ", Y4 = " << r.GetRY4() << endl;

        cout << "\n=== CALCULATIONS ===" << endl;
        cout << "Perimeter = " << r.GetPerimeter() << endl;
        cout << "Area = " << r.GetArea() << endl;


        cout << "\n=== FIGURE DATA ===" << endl;

        Figures f(
            0, 1,
            3, 2,
            6, 2,
            7, 2
        );

        cout << "X1 = " << f.GetX1() << ", Y1 = " << f.GetY1() << endl;
        cout << "X2 = " << f.GetX2() << ", Y2 = " << f.GetY2() << endl;
        cout << "X3 = " << f.GetX3() << ", Y3 = " << f.GetY3() << endl;
        cout << "X4 = " << f.GetX4() << ", Y4 = " << f.GetY4() << endl;

        cout << "\n=== CALCULATIONS(LENGTH OF SIDES) ===" << endl;
        cout << "Side1 = " << f.GetSideLength(1) << endl;
        cout << "Side2 = " << f.GetSideLength(2) << endl;
        cout << "Side3 = " << f.GetSideLength(3) << endl;
        cout << "Side4 = " << f.GetSideLength(4) << endl;

        cout << "\n=== ERROR TEST ===" << endl;
        cout << f.GetSideLength(5) << endl;
    }
    catch (const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

        cout << "\nPress Enter to exit...";
        cin.get();

        return 0;
    
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
