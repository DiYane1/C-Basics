using System;
class Program
{
    static void Main()
    {
        string studentName = Console.ReadLine();
        int grade = 1;
        double totalGrades = 0;
        int failedYears = 0; 
        int passedYears = 0; 

        while (grade <= 12)
        {
            double yearlyGrade = double.Parse(Console.ReadLine());

            if (yearlyGrade < 4.00)
            {
                failedYears++; 

                if (failedYears > 1) 
                {
                    Console.WriteLine($"{studentName} has been excluded at {grade} grade");
                    return;
                }

                continue;
            }

            totalGrades += yearlyGrade;
            passedYears++; 
            grade++;
        }

        double averageGrade = totalGrades / passedYears; 
        Console.WriteLine($"{studentName} graduated. Average grade: {averageGrade:F2}"); 
    }
}
