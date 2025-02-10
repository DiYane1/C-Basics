using System;

class Program
{
    static void Main()
    {
        double squareMeters = double.Parse(Console.ReadLine());
        double pricePerSquareMeter = 7.61;

        double initialPrice = squareMeters * pricePerSquareMeter;
        double discount = initialPrice * 0.18;
        double finalPrice = initialPrice - discount;
        
        Console.WriteLine($"The final price is: {finalPrice:F2} lv.");
        Console.WriteLine($"The discount is: {discount:F2} lv.");
    }
}
