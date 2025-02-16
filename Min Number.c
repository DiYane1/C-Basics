using System;
class Program
{
    static void Main()
    {
        int minNumber = int.MaxValue;

        while (true)
        {
            string input = Console.ReadLine();
            if (input.ToLower() == "stop")
            {
                break;
            }

            int number = int.Parse(input);

            if (number < minNumber)
            {
                minNumber = number;
            }
        }

        Console.WriteLine(minNumber);
    }
}
