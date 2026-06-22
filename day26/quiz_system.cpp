#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score = 0;
    char option;
    
    cout << "            QUIZ\n";

    // Question 1
    cout << "Q1. How many planets are there in the Solar System?\n";
    cout << "A. 7\n";
    cout << "B. 8\n";
    cout << "C. 9\n";
    cout << "D. 10\n";

    cin >> option;

    if(option == 'B' || option == 'b')
    {
        score++;
    }

    // Question 2
    cout << "\nQ2. How many days are there in a week?\n";
    cout << "A. 5\n";
    cout << "B. 6\n";
    cout << "C. 7\n";
    cout << "D. 8\n";

    cin >> option;

    if(option == 'C' || option == 'c')
    {
        score++;
    }

    // Question 3
    cout << "\nQ3. How many months are there in a year?\n";
    cout << "A. 10\n";
    cout << "B. 11\n";
    cout << "C. 12\n";
    cout << "D. 13\n";

    cin >> option;

    if(option == 'C' || option == 'c')
    {
        score++;
    }

    cout << "\nYour Score = " << score << "/3";

    return 0;
}