#include <bits/stdc++.h>
using namespace std;

int main()
{
    int secret_num = 17;
    int guess_num;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess_num;

        if (guess_num > secret_num)
            cout << "high\n";
        else if (guess_num < secret_num)
            cout << "low\n";
        else
            cout << "Correct guess!\n";

    } while (guess_num != secret_num);

    return 0;
}