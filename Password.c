using System;

class Program
{
    static void Main()
    {
        string username = Console.ReadLine();  
        string password = Console.ReadLine(); 

        string enteredPassword; 

        while ((enteredPassword = Console.ReadLine()) != password)
        {
        }

        Console.WriteLine($"Welcome {username}!");
    }
}
