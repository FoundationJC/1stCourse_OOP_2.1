using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary3
{
    public class Figures
    {
        private double x1, y1;
        private double x2, y2;
        private double x3, y3;
        private double x4, y4;

        public Figures() 
        {
            x1 = 0; y1 = 0;
            x2 = 0; y2 = 0;
            x3 = 0; y3 = 0;
            x4 = 0; y4 = 0;
        }

        public Figures(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4 )
        {
            this.x1 = x1; this.y1 = y1;
            this.x2 = x2; this.y2 = y2;
            this.x3 = x3; this.y3 = y3;
            this.x4 = x4; this.y4 = y4;



        }

        public Figures(Figures f1)
        {
            this.x1 = f1.x1; this.y1 = f1.y1;
            this.x2 = f1.x2; this.y2 = f1.y2;
            this.x3 = f1.x3; this.y3 = f1.y3;
            this.x4 = f1.x4; this.y4 = f1.y4;

        }

        public double X1 { get { return x1; } }
        public double Y1 { get { return y1; } }
        public double X2 { get { return x2; } }
        public double Y2 { get { return y2; } }
        public double X3 { get { return x3; } }
        public double Y3 { get { return y3; } }
        public double X4 { get { return x4; } }
        public double Y4 { get { return y4; } }

        protected double Distance(double x1, double y1, double x2, double y2)
        {
            return Math.Sqrt((x2-x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

        }

        public double GetSideLength(int sideNumber)
        {
            switch (sideNumber)
            {
                case 1: return Distance(x1, y1, x2, y2);
                case 2: return Distance(x2, y2, x3, y3);
                case 3: return Distance(x3, y3, x4, y4);
                case 4: return Distance(x4, y4, x1, y1);
                default: throw new ArgumentException("Invalid side number");
            }
        }


    }
}
