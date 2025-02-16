using System;
class Program
{
    static void Main()
    {
        int maxPoorGrades = int.Parse(Console.ReadLine()); 
        int poorGradesCount = 0; 
        int totalGradesCount = 0; 
        double sumGrades = 0; 
        string lastProblem = ""; 

        while (true)
        {
            string problemName = Console.ReadLine(); 

            if (problemName == "Enough") 
            {
                double averageScore = sumGrades / totalGradesCount;
                Console.WriteLine($"Average score: {averageScore:F2}");
                Console.WriteLine($"Number of problems: {totalGradesCount}");
                Console.WriteLine($"Last problem: {lastProblem}");
                break;
            }
            int grade = int.Parse(Console.ReadLine()); 
            totalGradesCount++; 
            sumGrades += grade; 
            lastProblem = problemName;

            if (grade <= 4)
            {
                poorGradesCount++;

                if (poorGradesCount == maxPoorGrades)
                {
                    Console.WriteLine($"You need a break, {poorGradesCount} poor grades.");
                    break;
                }
            }
        }
    }
}
