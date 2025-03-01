using System;
class Program
{
    static void Main()
    {
        int N = int.Parse(Console.ReadLine());

        string result = "";

        for (int num = 1111; num <= 9999; num++)
        {
            string numStr = num.ToString();
            bool isSpecial = true;

            foreach (char digitChar in numStr)
            {
                int digit = int.Parse(digitChar.ToString());
                if (digit == 0 || N % digit != 0)
                {
                    isSpecial = false;
                    break;
                }
            }

            if (isSpecial)
            {
                result += num + " ";
            }
        }

        Console.WriteLine(result.Trim());
    }
}
