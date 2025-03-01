using System;
class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()); 
        double totalSum = 0; 
        int presentationCount = 0;

        while (true)
        {
            string presentationName = Console.ReadLine();

            if (presentationName == "Finish")
                break;

            double sum = 0;

            for (int i = 0; i < n; i++)
            {
                double grade = double.Parse(Console.ReadLine()); 
                sum += grade; 
            }

            double averageGrade = sum / n; 
            Console.WriteLine($"{presentationName} - {averageGrade:F2}.");

            totalSum += sum; 
            presentationCount++;
        }

        double finalAssessment = totalSum / (presentationCount * n); 
        Console.WriteLine($"Student's final assessment is {finalAssessment:F2}."); 
    }
}

