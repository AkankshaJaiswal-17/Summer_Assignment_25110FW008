#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phone;
    string email;
};

int main()
{
    Contact c[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Total Contacts\n";
        cout << "7. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
            {
                cout << "Enter Name: ";
                getline(cin, c[count].name);

                cout << "Enter Phone Number: ";
                getline(cin, c[count].phone);

                cout << "Enter Email: ";
                getline(cin, c[count].email);

                count++;

                cout << "Contact Added Successfully!\n";
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "No Contacts Found!\n";
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nContact " << i + 1 << endl;
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        cout << "Email : " << c[i].email << endl;
                    }
                }
                break;
            }

            case 3:
            {
                string searchName;
                bool found = false;

                cout << "Enter Name to Search: ";
                getline(cin, searchName);

                for(int i = 0; i < count; i++)
                {
                    if(c[i].name == searchName)
                    {
                        cout << "\nContact Found\n";
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        cout << "Email : " << c[i].email << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact Not Found!\n";

                break;
            }

            case 4:
            {
                string updateName;
                bool found = false;

                cout << "Enter Name to Update: ";
                getline(cin, updateName);

                for(int i = 0; i < count; i++)
                {
                    if(c[i].name == updateName)
                    {
                        cout << "Enter New Phone Number: ";
                        getline(cin, c[i].phone);

                        cout << "Enter New Email: ";
                        getline(cin, c[i].email);

                        cout << "Contact Updated Successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact Not Found!\n";

                break;
            }

            case 5:
            {
                string deleteName;
                bool found = false;

                cout << "Enter Name to Delete: ";
                getline(cin, deleteName);

                for(int i = 0; i < count; i++)
                {
                    if(c[i].name == deleteName)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            c[j] = c[j + 1];
                        }

                        count--;

                        cout << "Contact Deleted Successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact Not Found!\n";

                break;
            }

            case 6:
            {
                cout << "Total Contacts = " << count << endl;
                break;
            }

            case 7:
            {
                cout << "Thank You!\n";
                break;
            }

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}