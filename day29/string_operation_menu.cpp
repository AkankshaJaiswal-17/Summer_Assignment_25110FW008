#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do
    {
        cout << "\n\n===== STRING OPERATIONS MENU =====";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Convert to Uppercase";
        cout << "\n4. Convert to Lowercase";
        cout << "\n5. Reverse String";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "String: " << str;
                break;

            case 2:
                cout << "Length = " << strlen(str);
                break;

            case 3:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                cout << "Uppercase String: " << str;
                break;

            case 4:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                cout << "Lowercase String: " << str;
                break;

            case 5:
            {
                char rev[100];
                int len = strlen(str);

                for(int i = 0; i < len; i++)
                {
                    rev[i] = str[len - 1 - i];
                }

                rev[len] = '\0';

                cout << "Reversed String: " << rev;
                break;
            }

            case 6:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}