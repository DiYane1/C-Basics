using System;

class Program
{
    static void Main()
    {
        int start = int.Parse(Console.ReadLine());
        int end = int.Parse(Console.ReadLine());

        for (int number = start; number <= end; number++)
        {
            string numStr = number.ToString();
            int evenSum = 0, oddSum = 0;

            for (int i = 0; i < numStr.Length; i++)
            {
                int digit = numStr[i] - '0';
                if ((i + 1) % 2 == 0)
                {
                    evenSum += digit;
                }
                else
                {
                    oddSum += digit;
                }
            }

            if (evenSum == oddSum)
            {
                Console.Write(number + " ");
            }
        }
    }
}
