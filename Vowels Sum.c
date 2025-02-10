using System;

class Program
{
    static void Main()
    {
        string text = Console.ReadLine();
        int sum = 0;

        foreach (char ch in text)
        {
            switch (ch)
            {
                case 'a':
                case 'A':
                    sum += 1;
                    break;
                case 'e':
                case 'E':
                    sum += 2;
                    break;
                case 'i':
                case 'I':
                    sum += 3;
                    break;
                case 'o':
                case 'O':
                    sum += 4;
                    break;
                case 'u':
                case 'U':
                    sum += 5;
                    break;
            }
        }

        Console.WriteLine(sum); 
    }
}