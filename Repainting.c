using System;

class Program
{
    static void Main()
    {
        int nylon = int.Parse(Console.ReadLine());
        int paint = int.Parse(Console.ReadLine());
        int thinner = int.Parse(Console.ReadLine());
        int hours = int.Parse(Console.ReadLine());

        double nylonPricePerSqM = 1.50;
        double paintPricePerLitre = 14.50;
        double thinnerPricePerLitre = 5.00;
        double bagPrice = 0.40;

        double totalNylonPrice = (nylon + 2) * nylonPricePerSqM;
        double totalPaintPrice = (paint * 1.1) * paintPricePerLitre;
        double totalThinnerPrice = thinner * thinnerPricePerLitre;
        double totalMaterialsCost = totalNylonPrice + totalPaintPrice + totalThinnerPrice + bagPrice;

        double workersCost = (totalMaterialsCost * 0.30) * hours;
        double totalCost = totalMaterialsCost + workersCost;

        Console.WriteLine($"{totalCost:F2}");
    }
}
