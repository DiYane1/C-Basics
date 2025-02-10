using System;

class Program
{
    static void Main()
    {
        int chickenMenus = int.Parse(Console.ReadLine());
        int fishMenus = int.Parse(Console.ReadLine());
        int vegetarianMenus = int.Parse(Console.ReadLine());

        double chickenMenuPrice = 10.35;
        double fishMenuPrice = 12.40;
        double vegetarianMenuPrice = 8.15;
        double deliveryPrice = 2.50;

        double totalChickenPrice = chickenMenus * chickenMenuPrice;
        double totalFishPrice = fishMenus * fishMenuPrice;
        double totalVegetarianPrice = vegetarianMenus * vegetarianMenuPrice;
        double totalMenuPrice = totalChickenPrice + totalFishPrice + totalVegetarianPrice;

        double dessertPrice = totalMenuPrice * 0.20;
        double totalOrderPrice = totalMenuPrice + dessertPrice + deliveryPrice;

        Console.WriteLine($"{totalOrderPrice:F2}");
    }
}
