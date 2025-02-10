using System;

class Program
{
    static void Main()
    {
        int dogFoodPackages = int.Parse(Console.ReadLine());
        int catFoodPackages = int.Parse(Console.ReadLine());

        double dogFoodPrice = 2.50;
        double catFoodPrice = 4.00;

        double totalCost = (dogFoodPackages * dogFoodPrice) + (catFoodPackages * catFoodPrice);

        Console.WriteLine($"{totalCost} lv.");
    }
}
