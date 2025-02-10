using System;

class Program
{
    static void Main()
    {
        int days = int.Parse(Console.ReadLine());
        string roomType = Console.ReadLine();
        string feedback = Console.ReadLine();

        double pricePerNight = 0;

        switch (roomType)
        {
            case "room for one person":
                pricePerNight = 18.00;
                break;
            case "apartment":
                pricePerNight = 25.00;
                break;
            case "president apartment":
                pricePerNight = 35.00;
                break;
        }

        int nights = days - 1;
        double totalPrice = nights * pricePerNight;

        if (roomType == "apartment")
        {
            if (nights < 10)
                totalPrice *= 0.70; 
            else if (nights <= 15)
                totalPrice *= 0.65; 
            else
                totalPrice *= 0.50; 
        }
        else if (roomType == "president apartment")
        {
            if (nights < 10)
                totalPrice *= 0.90; 
            else if (nights <= 15)
                totalPrice *= 0.85; 
            else
                totalPrice *= 0.80; 
        }

        if (feedback == "positive")
            totalPrice *= 1.25; 
        else if (feedback == "negative")
            totalPrice *= 0.90; 

        Console.WriteLine($"{totalPrice:F2}");
    }
}
