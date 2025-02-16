using System;
class Program
{
    static void Main()
    {
        string actorName = Console.ReadLine(); 
        double points = double.Parse(Console.ReadLine()); 
        int n = int.Parse(Console.ReadLine());  

        for (int i = 0; i < n; i++)
        {
            string evaluatorName = Console.ReadLine();  
            double evaluatorPoints = double.Parse(Console.ReadLine());  

            double addedPoints = (evaluatorName.Length * evaluatorPoints) / 2;
            points += addedPoints;

            if (points > 1250.5)
            {
                Console.WriteLine($"Congratulations, {actorName} got a nominee for leading role with {points:F1}!");
                return;
            }
        }

        double pointsNeeded = 1250.5 - points;
        Console.WriteLine($"Sorry, {actorName} you need {pointsNeeded:F1} more!");
    }
}
