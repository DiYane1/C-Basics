using System;

class Program
{
    static void Main()
    {
        double budget = double.Parse(Console.ReadLine());
        int extrasCount = int.Parse(Console.ReadLine());
        double outfitPricePerExtra = double.Parse(Console.ReadLine());

        double decorCost = budget * 0.10; 
        double totalOutfitCost = extrasCount * outfitPricePerExtra; 


        if (extrasCount > 150)
        {
            totalOutfitCost -= totalOutfitCost * 0.10; 
        }

        double totalCost = decorCost + totalOutfitCost;

        if (totalCost > budget)
        {
            double moneyNeeded = totalCost - budget;
            Console.WriteLine("Not enough money!");
            Console.WriteLine($"Wingard needs {moneyNeeded:F2} leva more.");
        }
        else
        {
            double remainingMoney = budget - totalCost;
            Console.WriteLine("Action!");
            Console.WriteLine($"Wingard starts filming with {remainingMoney:F2} leva left.");
        }
    }
}