using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassLibrary3;


namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Rhombuses r = new Rhombuses(
            0, 0,
            3, 0,
            4, 2,
            1, 2
            );

            Console.WriteLine("=== RHOMBUS DATA ===");

            Console.WriteLine($"X1 = {r.X1}, Y1 = {r.Y1}");
            Console.WriteLine($"X2 = {r.X2}, Y2 = {r.Y2}");
            Console.WriteLine($"X3 = {r.X3}, Y3 = {r.Y3}");
            Console.WriteLine($"X4 = {r.X4}, Y4 = {r.Y4}");


            Console.WriteLine("\n=== CALCULATIONS ===");
            Console.WriteLine($"Perimeter = {r.GetPerimeter()}");
            Console.WriteLine($"Area = {r.GetArea()}");

            //Demonstration of base class
            Figures f = new Figures(
            0, 1,
            3, 2,
            6, 2,
            7, 2);

            Console.WriteLine("=== FIGURE DATA ===");

            Console.WriteLine($"X1 = {f.X1}, Y1 = {f.Y1}");
            Console.WriteLine($"X2 = {f.X2}, Y2 = {f.Y2}");
            Console.WriteLine($"X3 = {f.X3}, Y3 = {f.Y3}");
            Console.WriteLine($"X4 = {f.X4}, Y4 = {f.Y4}");


            Console.WriteLine("\n=== CALCULATIONS ===");
            Console.WriteLine($"Side1 = {f.GetSideLength(1)}");
            Console.WriteLine($"Side2 = {f.GetSideLength(2)}");
            Console.WriteLine($"Side3 = {f.GetSideLength(3)}");
            Console.WriteLine($"Side4 = {f.GetSideLength(4)}");


            Console.WriteLine("\nPress any key to exit...");
            Console.ReadKey();

            //not essential (IN programming: if error means tht program works incorrectly than we don't need to handle it)

            try
            {
                Console.WriteLine(f.GetSideLength(5));
            }
            catch (ArgumentException ex)
            {
                Console.WriteLine(ex.Message);
            }


        }
    }
}
