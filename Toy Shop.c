using System;

class Program
{
    static void Main()
    {
        double tripCost = double.Parse(Console.ReadLine());
        int puzzleCount = int.Parse(Console.ReadLine());
        int dollCount = int.Parse(Console.ReadLine());
        int bearCount = int.Parse(Console.ReadLine());
        int minionCount = int.Parse(Console.ReadLine());
        int truckCount = int.Parse(Console.ReadLine());

        double puzzlePrice = 2.60;
        double dollPrice = 3.00;
        double bearPrice = 4.10;
        double minionPrice = 8.20;
        double truckPrice = 2.00;

        double totalPrice = (puzzleCount * puzzlePrice) + (dollCount * dollPrice) + 
                            (bearCount * bearPrice) + (minionCount * minionPrice) + 
                            (truckCount * truckPrice);

        if (puzzleCount + dollCount + bearCount + minionCount + truckCount >= 50)
        {
            totalPrice -= totalPrice * 0.25;
        }

        double rent = totalPrice * 0.10; 
        double profit = totalPrice - rent;

        if (profit >= tripCost)
        {
            double remainingMoney = profit - tripCost;
            Console.WriteLine($"Yes! {remainingMoney:F2} lv left.");
        }
        else
        {
            double neededMoney = tripCost - profit;
            Console.WriteLine($"Not enough money! {neededMoney:F2} lv needed.");
        }
    }
}
