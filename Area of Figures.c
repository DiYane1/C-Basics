using System;

class Program
{
    static void Main()
    {
        string shape = Console.ReadLine();
        double area = 0;

        if (shape == "square")
        {
            double side = double.Parse(Console.ReadLine());
            area = side * side;
        }
        else if (shape == "rectangle")
        {
            double side1 = double.Parse(Console.ReadLine());
            double side2 = double.Parse(Console.ReadLine());
            area = side1 * side2;
        }
        else if (shape == "circle")
        {
            double radius = double.Parse(Console.ReadLine());
            area = Math.PI * radius * radius;
        }
        else if (shape == "triangle")
        {
            double baseSide = double.Parse(Console.ReadLine());
            double height = double.Parse(Console.ReadLine());
            area = 0.5 * baseSide * height;
        }

        Console.WriteLine($"{area:F3}");
    }
}
