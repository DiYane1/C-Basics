using System;

class Program
{
    static void Main()
    {
        string day = Console.ReadLine();

        int price = 0;

        switch (day)
        {
            case "Monday":
            case "Tuesday":
            case "Friday":
                price = 12;
                break;
            case "Wednesday":
            case "Thursday":
                price = 14;
                break;
            case "Saturday":
            case "Sunday":
                price = 16;
                break;
            default:
                Console.WriteLine("Invalid day");
                return;
        }

        Console.WriteLine(price);
    }
}
