using System;

class Program
{
    static void Main()
    {
        int pensCount = int.Parse(Console.ReadLine());  
        int markersCount = int.Parse(Console.ReadLine()); 
        int cleanerLiters = int.Parse(Console.ReadLine()); 
        int discountPercentage = int.Parse(Console.ReadLine()); 

        double penPrice = 5.80;
        double markerPrice = 7.20;
        double cleanerPrice = 1.20;

        double totalPrice = (pensCount * penPrice) + (markersCount * markerPrice) + (cleanerLiters * cleanerPrice);
        double discountAmount = (discountPercentage / 100.0) * totalPrice;
        double finalPrice = totalPrice - discountAmount;

        Console.WriteLine($"{finalPrice:F2}");
    }
}
