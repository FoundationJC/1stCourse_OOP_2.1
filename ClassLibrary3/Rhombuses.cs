using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary3
{       
    public class Rhombuses : Figures
    {   
        public Rhombuses() : base() { }

        public Rhombuses(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) : base(x1, y1, x2, y2, x3, y3, x4, y4) { }

        public Rhombuses(Rhombuses r1) : base(r1) { }

        public double GetPerimeter()
        {
            return GetSideLength(1) + GetSideLength(2) +
                   GetSideLength(3) + GetSideLength(4);
        }

        public double GetArea()
        {
            double d1 = Distance(X1, Y1, X3, Y3);
            double d2 = Distance(X2, Y2, X4, Y4);

            return (d1 * d2) / 2;
        }

        

    }
}
