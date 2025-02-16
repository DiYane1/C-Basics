using System;

class Program
{
    static void Main()
    {
        double totalAmount = 0.0;

        while (true)
        {
            string input = Console.ReadLine();

            if (input == "NoMoreMoney")
            {
                break;
            }

            double amount = double.Parse(input); 

            if (amount < 0)
            {
                Console.WriteLine("Invalid operation!");
                break;
            }

            Console.WriteLine($"Increase: {amount:F2}");
            totalAmount += amount;
        }

        Console.WriteLine($"Total: {totalAmount:F2}");
    }
}
