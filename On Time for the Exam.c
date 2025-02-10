using System;

class Program
{
    static void Main()
    {
        int examHour = int.Parse(Console.ReadLine());
        int examMinute = int.Parse(Console.ReadLine());
        int arrivalHour = int.Parse(Console.ReadLine());
        int arrivalMinute = int.Parse(Console.ReadLine());

        int examTimeInMinutes = examHour * 60 + examMinute;
        int arrivalTimeInMinutes = arrivalHour * 60 + arrivalMinute;
        int difference = arrivalTimeInMinutes - examTimeInMinutes;

        if (difference > 0) 
        {
            Console.WriteLine("Late");
            PrintTimeDifference(difference, "after");
        }
        else if (difference >= -30) 
        {
            Console.WriteLine("On time");
            if (difference != 0)
            {
                PrintTimeDifference(-difference, "before");
            }
        }
        else 
        {
            Console.WriteLine("Early");
            PrintTimeDifference(-difference, "before");
        }
    }

    static void PrintTimeDifference(int minutes, string when)
    {
        if (minutes < 60)
        {
            Console.WriteLine($"{minutes} minutes {when} the start");
        }
        else
        {
            int hours = minutes / 60;
            int mins = minutes % 60;
            Console.WriteLine($"{hours}:{mins:D2} hours {when} the start");
        }
    }
}