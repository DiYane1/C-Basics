using System;

class Program
{
    static void Main()
    {
        string fruit = Console.ReadLine();
        string day = Console.ReadLine();
        double quantity = double.Parse(Console.ReadLine());

        double price = 0.0;
        bool isValid = true;

        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || 
            day == "Thursday" || day == "Friday")
        {
            switch (fruit)
            {
                case "banana": price = 2.50; break;
                case "apple": price = 1.20; break;
                case "orange": price = 0.85; break;
                case "grapefruit": price = 1.45; break;
                case "kiwi": price = 2.70; break;
                case "pineapple": price = 5.50; break;
                case "grapes": price = 3.85; break;
                default: isValid = false; break;
            }
        }
        else if (day == "Saturday" || day == "Sunday")
        {
            switch (fruit)
            {
                case "banana": price = 2.70; break;
                case "apple": price = 1.25; break;
                case "orange": price = 0.90; break;
                case "grapefruit": price = 1.60; break;
                case "kiwi": price = 3.00; break;
                case "pineapple": price = 5.60; break;
                case "grapes": price = 4.20; break;
                default: isValid = false; break;
            }
        }
        else
        {
            isValid = false;
        }

        if (isValid)
        {
            double totalPrice = price * quantity;
            Console.WriteLine($"{totalPrice:F2}");
        }
        else
        {
            Console.WriteLine("error");
        }
    }
}
