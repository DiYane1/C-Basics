using System;
class Program
{
    static void Main()
    {
        int width = int.Parse(Console.ReadLine());
        int length = int.Parse(Console.ReadLine());
        int height = int.Parse(Console.ReadLine());

        int totalVolume = width * length * height;

        string input;
        while ((input = Console.ReadLine()) != "Done")
        {
            int boxes = int.Parse(input);
            totalVolume -= boxes;

            if (totalVolume < 0)
            {
                Console.WriteLine($"No more free space! You need {Math.Abs(totalVolume)} Cubic meters more.");
                return;
            }
        }
        Console.WriteLine($"{totalVolume} Cubic meters left.");
    }
}
