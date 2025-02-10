using System;

class Program
{
    static void Main()
    {
        int hour = int.Parse(Console.ReadLine());
        string day = Console.ReadLine();

        bool isWorkingDay = day == "Monday" || day == "Tuesday" || day == "Wednesday" ||
                            day == "Thursday" || day == "Friday" || day == "Saturday";


        if (isWorkingDay && hour >= 10 && hour <= 18)
        {
            Console.WriteLine("open");
        }
        else
        {
            Console.WriteLine("closed"); 
        }
    }
}

