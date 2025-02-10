using System;

class Program
{
    static void Main()
    {
        string serialName = Console.ReadLine(); 
        int episodeDuration = int.Parse(Console.ReadLine()); 
        int breakDuration = int.Parse(Console.ReadLine()); 

        double lunchTime = breakDuration / 8.0;
        double restTime = breakDuration / 4.0; 
        double freeTime = breakDuration - lunchTime - restTime;


        if (freeTime >= episodeDuration)
        {
            Console.WriteLine($"You have enough time to watch {serialName} and left with {Math.Ceiling(freeTime - episodeDuration)} minutes free time.");
        }
        else
        {
            Console.WriteLine($"You don't have enough time to watch {serialName}, you need {Math.Ceiling(episodeDuration - freeTime)} more minutes.");
        }
    }
}
