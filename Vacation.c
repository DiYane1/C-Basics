using System;
class Program
{
    static void Main()
    {
        double neededMoney = double.Parse(Console.ReadLine()); 
        double availableMoney = double.Parse(Console.ReadLine()); 
        int daysCount = 0; 
        int spendDaysCount = 0; 

        while (availableMoney < neededMoney)
        {
            string action = Console.ReadLine(); 
            double amount = double.Parse(Console.ReadLine()); 

            daysCount++; 

            if (action == "spend")
            {
                spendDaysCount++; 
                availableMoney -= amount; 
                if (availableMoney < 0)
                {
                    availableMoney = 0; 
                }

                if (spendDaysCount == 5) 
                {
                    Console.WriteLine("You can't save the money.");
                    Console.WriteLine(daysCount);
                    return;
                }
            }
            else if (action == "save")
            {
                spendDaysCount = 0; 
                availableMoney += amount; 
            }
        }

        Console.WriteLine($"You saved the money for {daysCount} days.");
    }
}
