// Compulsory 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Long double ensures higher numbers can be calculated
long double Factorial(int n);
int Fibbonacci(int n);

int main()
{
    std::cout << "Select 1 for Factorial or 2 for Fibbonacci" << endl;
    int choice;
    cin >> choice;
    //If input is not a number, clear the input and call main again.
    if (!cin)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        main();
    }
    
    if (choice == 1)
    {
        cout << "Factorial: Enter a positive int" << endl;;
        cin >> choice;
        if (choice < 0)
        {
            choice = abs(choice);
            cout << "Number converted to positive due to severe user malfunction" << endl;
            cout << "The factorial of " << choice << " is " << Factorial(choice) << endl;
        }
        else
        {
            cout << "The factorial of " << choice << " is " << Factorial(choice) << endl;
        }
        main();
    }
    else if (choice == 2)
    {
        cout << "Fibbonacci: Enter the number of steps " << endl;
        cin >> choice;
        for (int i = 0; i < choice; i++)
        {
            cout << " " << Fibbonacci(i);
        }
        cout << endl;
        main();
    }
    else
    {
        main();
    }
}

long double Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
        return n * Factorial(n - 1);
}

int Fibbonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    else
    {
        return Fibbonacci(n - 1) + Fibbonacci(n - 2);
    }
}

