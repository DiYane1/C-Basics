using System;

class Program
{
    static void Main()
    {
        int length = int.Parse(Console.ReadLine()); 
        int width = int.Parse(Console.ReadLine()); 
        int height = int.Parse(Console.ReadLine()); 
        double percentage = double.Parse(Console.ReadLine()); 

        double volumeCm3 = length * width * height;
        double volumeLiters = volumeCm3 * 0.001;
        double waterNeeded = volumeLiters * (1 - (percentage / 100));

        Console.WriteLine($"{waterNeeded:F8}");
    }
}
