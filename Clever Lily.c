using System;
class Program
{
    static void Main()
    {
        int age = int.Parse(Console.ReadLine());
        double washingMachinePrice = double.Parse(Console.ReadLine());
        int toyPrice = int.Parse(Console.ReadLine());

        double savedMoney = 0;
        int toyCount = 0;
        int brotherTake = 0;

        for (int i = 1; i <= age; i++)
        {
            if (i % 2 != 0)  
            {
                toyCount++;
            }
            else  
            {
                double money = 10 * (i / 2);
                savedMoney += money; 
                brotherTake++; 
            }
        }

        savedMoney += toyCount * toyPrice;
        savedMoney -= brotherTake;

        if (savedMoney >= washingMachinePrice)
        {
            Console.WriteLine($"Yes! {savedMoney - washingMachinePrice:F2}");
        }
        else
        {
            Console.WriteLine($"No! {washingMachinePrice - savedMoney:F2}");
        }
    }
}
