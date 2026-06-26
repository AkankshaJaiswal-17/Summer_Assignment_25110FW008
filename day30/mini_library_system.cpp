#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int bookID[100];
    string title[100];
    string author[100];

    // Add books
    for(int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> bookID[i];

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[i]);

        cout << "Enter Author Name: ";
        getline(cin, author[i]);
    }

    // Display books
    cout << "\n\n----- Library Books -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nBook ID: " << bookID[i];
        cout << "\nTitle: " << title[i];
        cout << "\nAuthor: " << author[i] << endl;
    }

    // Search book
    int searchID;
    cout << "\nEnter Book ID to Search: ";
    cin >> searchID;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(bookID[i] == searchID)
        {
            cout << "\nBook Found!";
            cout << "\nTitle: " << title[i];
            cout << "\nAuthor: " << author[i];
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nBook not found!";
    }

    return 0;
}