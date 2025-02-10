using System;

class Program
{
    static void Main()
    {
        double worldRecord = double.Parse(Console.ReadLine()); 
        double distance = double.Parse(Console.ReadLine());    
        double timePerMeter = double.Parse(Console.ReadLine()); 

        double timeWithoutResistance = distance * timePerMeter;
        double resistanceTime = Math.Floor(distance / 15) * 12.5;
        double totalTime = timeWithoutResistance + resistanceTime;

        if (totalTime < worldRecord)
        {
            Console.WriteLine($"Yes, he succeeded! The new world record is {totalTime:F2} seconds.");
        }
        else
        {
            double timeSlower = totalTime - worldRecord;
            Console.WriteLine($"No, he failed! He was {timeSlower:F2} seconds slower.");
        }
    }
}

