using System;

class Program
{
    static void Main()
    {
        double budget = double.Parse(Console.ReadLine()); 
        int numGraphicsCards = int.Parse(Console.ReadLine());  
        int numProcessors = int.Parse(Console.ReadLine()); 
        int numRam = int.Parse(Console.ReadLine()); 

        double graphicsCardPrice = 250;
        double processorPricePercentage = 0.35;
        double ramPricePercentage = 0.10;

        double totalGraphicsCardCost = numGraphicsCards * graphicsCardPrice;
        double processorPrice = totalGraphicsCardCost * processorPricePercentage;
        double totalProcessorCost = numProcessors * processorPrice;
        double ramPrice = totalGraphicsCardCost * ramPricePercentage;
        double totalRamCost = numRam * ramPrice;

        double totalCost = totalGraphicsCardCost + totalProcessorCost + totalRamCost;

        if (numGraphicsCards > numProcessors)
        {
            totalCost *= 0.85; 
        }

        if (totalCost <= budget)
        {
            double remainingBudget = budget - totalCost;
            Console.WriteLine($"You have {remainingBudget:F2} leva left!");
        }
        else
        {
            double neededMoney = totalCost - budget;
            Console.WriteLine($"Not enough money! You need {neededMoney:F2} leva more!");
        }
    }
}
