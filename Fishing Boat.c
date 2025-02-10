using System;

class Program
{
    static void Main()
    {
        int budget = int.Parse(Console.ReadLine()); 
        string season = Console.ReadLine(); 
        int fishermen = int.Parse(Console.ReadLine()); 

        double boatRent = 0;
        
        if (season == "Spring")
        {
            boatRent = 3000;
        }
        else if (season == "Summer" || season == "Autumn")
        {
            boatRent = 4200;
        }
        else if (season == "Winter")
        {
            boatRent = 2600;
        }

        double discount = 0;

        if (fishermen <= 6)
        {
            discount = 0.10; 
        }
        else if (fishermen <= 11)
        {
            discount = 0.15; 
        }
        else
        {
            discount = 0.25; 
        }

        double finalPrice = boatRent - (boatRent * discount);

        if (fishermen % 2 == 0 && season != "Autumn")
        {
            finalPrice -= (finalPrice * 0.05); 
        }

        if (budget >= finalPrice)
        {
            double remainingMoney = budget - finalPrice;
            Console.WriteLine($"Yes! You have {remainingMoney:f2} leva left.");
        }
        else
        {
            double neededMoney = finalPrice - budget;
            Console.WriteLine($"Not enough money! You need {neededMoney:f2} leva.");
        }
    }
}
