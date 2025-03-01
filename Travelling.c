using System;

class Program
{
    static void Main()
    {
        while (true)
        {
            string destination = Console.ReadLine();
            if (destination == "End")
                break;

            double budget = double.Parse(Console.ReadLine());
            double savedMoney = 0;

            while (savedMoney < budget)
            {
                savedMoney += double.Parse(Console.ReadLine());
            }

            Console.WriteLine($"Going to {destination}!");
        }
    }
}
