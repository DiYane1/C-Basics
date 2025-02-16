using System;
class Program
{
    static void Main()
    {
        int maxNumber = int.MinValue; 

        while (true)
        {
            string input = Console.ReadLine(); 

            if (input.ToLower() == "stop") 
            {
                break;
            }

            int number = int.Parse(input);

            if (number > maxNumber) 
            {
                maxNumber = number; 
            }
        }

        Console.WriteLine(maxNumber);
    }
}
