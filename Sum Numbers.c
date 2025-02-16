using System;

class Program
{
    static void Main()
    {
        int target = int.Parse(Console.ReadLine()); 
        int sum = 0;

        while (sum < target)
        {
            int num = int.Parse(Console.ReadLine()); 
            sum += num; 
        }

        Console.WriteLine(sum);  
    }
}
