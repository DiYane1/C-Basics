using System;

class Program
{
    static void Main()
    {
        int N1 = int.Parse(Console.ReadLine());
        int N2 = int.Parse(Console.ReadLine());
        string operatorInput = Console.ReadLine();

        switch (operatorInput)
        {
            case "+":
                int sum = N1 + N2;
                Console.WriteLine($"{N1} + {N2} = {sum} - {(sum % 2 == 0 ? "even" : "odd")}");
                break;

            case "-":
                int difference = N1 - N2;
                Console.WriteLine($"{N1} - {N2} = {difference} - {(difference % 2 == 0 ? "even" : "odd")}");
                break;

            case "*":
                int product = N1 * N2;
                Console.WriteLine($"{N1} * {N2} = {product} - {(product % 2 == 0 ? "even" : "odd")}");
                break;

            case "/":
                if (N2 == 0)
                {
                    Console.WriteLine($"Cannot divide {N1} by zero");
                }
                else
                {
                    double divisionResult = (double)N1 / N2;
                    Console.WriteLine($"{N1} / {N2} = {divisionResult:f2}");
                }
                break;

            case "%":
                if (N2 == 0)
                {
                    Console.WriteLine($"Cannot divide {N1} by zero");
                }
                else
                {
                    int remainder = N1 % N2;
                    Console.WriteLine($"{N1} % {N2} = {remainder}");
                }
                break;

            default:
                break;
        }
    }
}
