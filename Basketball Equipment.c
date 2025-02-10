using System;

class Program
{
    static void Main()
    {
        int yearlyFee = int.Parse(Console.ReadLine());
        
        double shoesPrice = yearlyFee * 0.60; 
        double outfitPrice = shoesPrice * 0.80; 
        double ballPrice = outfitPrice / 4; 
        double accessoriesPrice = ballPrice / 5; 
        
        double totalCost = yearlyFee + shoesPrice + outfitPrice + ballPrice + accessoriesPrice;
        
        Console.WriteLine($"{totalCost:F2}");
    }
}
