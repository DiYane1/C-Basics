using System;
class Program
{
    static void Main()
    {
        const int goal = 10000; 
        int totalSteps = 0; 

        while (totalSteps < goal)
        {
            string input = Console.ReadLine(); 

            if (input == "Going home") 
            {
                int lastSteps = int.Parse(Console.ReadLine()); 
                totalSteps += lastSteps;
                break; 
            }

            int steps = int.Parse(input); 
            totalSteps += steps; 
        }

        if (totalSteps >= goal)
        {
            Console.WriteLine("Goal reached! Good job!");
            Console.WriteLine($"{totalSteps - goal} steps over the goal!");
        }
        else
        {
            Console.WriteLine($"{goal - totalSteps} more steps to reach goal.");
        }
    }
}
