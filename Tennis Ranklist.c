using System;
class Program
{
    static void Main()
    {
        int tournaments = int.Parse(Console.ReadLine());
        int points = int.Parse(Console.ReadLine());

        int wonTournaments = 0;
        int totalPoints = 0;

        for (int i = 0; i < tournaments; i++)
        {
            string stage = Console.ReadLine();
            int tournamentPoints = 0;

            if (stage == "W")
            {
                tournamentPoints = 2000;
                wonTournaments++;
            }
            else if (stage == "F")
            {
                tournamentPoints = 1200;
            }
            else if (stage == "SF")
            {
                tournamentPoints = 720;
            }

            points += tournamentPoints;
            totalPoints += tournamentPoints;
        }

        double averagePoints = (double)totalPoints / tournaments;
        double winPercentage = (double)wonTournaments / tournaments * 100;

        Console.WriteLine($"Final points: {points}");
        Console.WriteLine($"Average points: {Math.Floor(averagePoints)}");
        Console.WriteLine($"{winPercentage:F2}%");
    }
}
