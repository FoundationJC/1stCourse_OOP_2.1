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

            Console.WriteLine("\nPress any key to exit...");
            Console.ReadKey();


        }
    }
}
