using System;

class Program
{
    // Функция за проверка дали числото е просто
    static bool IsPrime(int num)
    {
        if (num <= 1)
            return false; // 0 и 1 не са прости числа
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
                return false; // ако делител е намерен, не е просто
        }
        return true; // числото е просто
    }

    static void Main()
    {
        int primeSum = 0;
        int nonPrimeSum = 0;

        while (true)
        {
            string input = Console.ReadLine();
            if (input == "stop")
            {
                break; 
            }
            if (int.TryParse(input, out int number))
            {
                if (number < 0)
                {
                    Console.WriteLine("Number is negative.");
                    continue;
                }

                if (IsPrime(number))
                {
                    primeSum += number; 
                }
                else
                {
                    nonPrimeSum += number;
                }
            }
            else
            {
                Console.WriteLine("Invalid input. Please enter a valid number or 'stop'.");
            }
        }
        Console.WriteLine($"Sum of all prime numbers is: {primeSum}");
        Console.WriteLine($"Sum of all non prime numbers is: {nonPrimeSum}");
    }
}
