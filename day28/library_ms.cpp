#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string name;
    string author;
    bool issued;
};

int main()
{
    Book b[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Total Books\n";
        cout << "8. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nEnter Book ID: ";
                cin >> b[count].id;

                cin.ignore();

                cout << "Enter Book Name: ";
                getline(cin, b[count].name);

                cout << "Enter Author Name: ";
                getline(cin, b[count].author);

                b[count].issued = false;
                count++;

                cout << "Book Added Successfully!\n";
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "No Books Available!\n";
                }
                else
                {
                    cout << "\n----- Book Records -----\n";

                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nBook " << i + 1 << endl;
                        cout << "ID: " << b[i].id << endl;
                        cout << "Name: " << b[i].name << endl;
                        cout << "Author: " << b[i].author << endl;

                        if(b[i].issued)
                            cout << "Status: Issued\n";
                        else
                            cout << "Status: Available\n";
                    }
                }
                break;
            }

            case 3:
            {
                int searchId;
                bool found = false;

                cout << "Enter Book ID to Search: ";
                cin >> searchId;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].id == searchId)
                    {
                        cout << "\nBook Found!\n";
                        cout << "ID: " << b[i].id << endl;
                        cout << "Name: " << b[i].name << endl;
                        cout << "Author: " << b[i].author << endl;

                        if(b[i].issued)
                            cout << "Status: Issued\n";
                        else
                            cout << "Status: Available\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 4:
            {
                int issueId;
                bool found = false;

                cout << "Enter Book ID to Issue: ";
                cin >> issueId;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].id == issueId)
                    {
                        found = true;

                        if(!b[i].issued)
                        {
                            b[i].issued = true;
                            cout << "Book Issued Successfully!\n";
                        }
                        else
                        {
                            cout << "Book Already Issued!\n";
                        }

                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 5:
            {
                int returnId;
                bool found = false;

                cout << "Enter Book ID to Return: ";
                cin >> returnId;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].id == returnId)
                    {
                        found = true;

                        if(b[i].issued)
                        {
                            b[i].issued = false;
                            cout << "Book Returned Successfully!\n";
                        }
                        else
                        {
                            cout << "This Book Was Not Issued!\n";
                        }

                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 6:
            {
                int deleteId;
                bool found = false;

                cout << "Enter Book ID to Delete: ";
                cin >> deleteId;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].id == deleteId)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            b[j] = b[j + 1];
                        }

                        count--;
                        found = true;

                        cout << "Book Deleted Successfully!\n";
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 7:
            {
                cout << "Total Books = " << count << endl;
                break;
            }

            case 8:
            {
                cout << "Thank You!\n";
                break;
            }

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 8);

    return 0;
}