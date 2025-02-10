using System;

class Program
{
    static void Main()
    {
        string flowerType = Console.ReadLine();
        int flowerCount = int.Parse(Console.ReadLine());
        double budget = double.Parse(Console.ReadLine());

        double pricePerFlower = 0;

        if (flowerType == "Roses")
        {
            pricePerFlower = 5;
            if (flowerCount > 80)
                pricePerFlower *= 0.9; 
        }
        else if (flowerType == "Dahlias")
        {
            pricePerFlower = 3.80;
            if (flowerCount > 90)
                pricePerFlower *= 0.85; 
        }
        else if (flowerType == "Tulips")
        {
            pricePerFlower = 2.80;
            if (flowerCount > 80)
                pricePerFlower *= 0.85; 
        }
        else if (flowerType == "Narcissus")
        {
            pricePerFlower = 3;
            if (flowerCount < 120)
                pricePerFlower *= 1.15; 
        }
        else if (flowerType == "Gladiolus")
        {
            pricePerFlower = 2.50;
            if (flowerCount < 80)
                pricePerFlower *= 1.20; 
        }

        double totalCost = pricePerFlower * flowerCount;

        if (budget >= totalCost)
        {
            double remainingMoney = budget - totalCost;
            Console.WriteLine($"Hey, you have a great garden with {flowerCount} {flowerType} and {remainingMoney:f2} leva left.");
        }
        else
        {
            double additionalMoney = totalCost - budget;
            Console.WriteLine($"Not enough money, you need {additionalMoney:f2} leva more.");
        }
    }
}
