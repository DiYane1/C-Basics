using System;
class Program
{
    static void Main()
    {
        double change = double.Parse(Console.ReadLine()); 
        int coinsCount = 0; 
        int cents = (int)Math.Round(change * 100);
        int[] coins = { 200, 100, 50, 20, 10, 5, 2, 1 };

        foreach (int coin in coins)
        {
            coinsCount += cents / coin; 
            cents %= coin; 

            if (cents == 0) 
                break;
        }

        Console.WriteLine(coinsCount);
    }
}
