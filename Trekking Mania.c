using System;
class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());

        int musala = 0;
        int montblan = 0;
        int kilimanjaro = 0;
        int k2 = 0;
        int everest = 0;

        int totalPeople = 0;

        for (int i = 0; i < n; i++)
        {
            int peopleInGroup = int.Parse(Console.ReadLine());
            totalPeople += peopleInGroup;

            if (peopleInGroup <= 5)
            {
                musala += peopleInGroup;
            }
            else if (peopleInGroup <= 12)
            {
                montblan += peopleInGroup;
            }
            else if (peopleInGroup <= 25)
            {
                kilimanjaro += peopleInGroup;
            }
            else if (peopleInGroup <= 40)
            {
                k2 += peopleInGroup;
            }
            else
            {
                everest += peopleInGroup;
            }
        }

        double musalaPercent = (double)musala / totalPeople * 100;
        double montblanPercent = (double)montblan / totalPeople * 100;
        double kilimanjaroPercent = (double)kilimanjaro / totalPeople * 100;
        double k2Percent = (double)k2 / totalPeople * 100;
        double everestPercent = (double)everest / totalPeople * 100;

        Console.WriteLine($"{musalaPercent:F2}%");
        Console.WriteLine($"{montblanPercent:F2}%");
        Console.WriteLine($"{kilimanjaroPercent:F2}%");
        Console.WriteLine($"{k2Percent:F2}%");
        Console.WriteLine($"{everestPercent:F2}%");
    }
}
