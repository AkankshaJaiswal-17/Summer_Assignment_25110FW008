#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int lenght = 0;
    int vowel_lenght = 0;
    int consonant_lenght = 0;

    cout << "Enter a string: ";
    cin >> str;

    // Find length
    for(int i = 0; str[i] != '\0'; i++)
    {
        lenght++;
    }

    // Count vowels
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a' || str[i]=='A' ||
           str[i]=='e' || str[i]=='E' ||
           str[i]=='i' || str[i]=='I' ||
           str[i]=='o' || str[i]=='O' ||
           str[i]=='u' || str[i]=='U')
        {
            vowel_lenght++;
        }
    }

    consonant_lenght = lenght - vowel_lenght;

    cout << "Vowels = " << vowel_lenght << endl;
    cout << "Consonants = " << consonant_lenght << endl;

    return 0;
}