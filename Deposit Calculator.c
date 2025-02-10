using System;

class Program
{
    static void Main()
    {
        double depositedAmount = double.Parse(Console.ReadLine());
        int depositPeriod = int.Parse(Console.ReadLine());
        
        double annualInterestRate = double.Parse(Console.ReadLine());
        double finalAmount = depositedAmount + depositPeriod * ((depositedAmount * annualInterestRate) / 100 / 12);
        
        Console.WriteLine($"{finalAmount:F2}");
    }
}
