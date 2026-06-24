#include <iostream>
#include <string>
using namespace std;

struct Ticket
{
    int ticketNo;
    string name;
    string destination;
};

int main()
{
    Ticket t[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. View All Bookings\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Total Bookings\n";
        cout << "6. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Enter Ticket Number: ";
                cin >> t[count].ticketNo;

                cin.ignore();

                cout << "Enter Passenger Name: ";
                getline(cin, t[count].name);

                cout << "Enter Destination: ";
                getline(cin, t[count].destination);

                count++;

                cout << "Ticket Booked Successfully!\n";
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "No Bookings Found!\n";
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nTicket " << i + 1 << endl;
                        cout << "Ticket No: " << t[i].ticketNo << endl;
                        cout << "Passenger Name: " << t[i].name << endl;
                        cout << "Destination: " << t[i].destination << endl;
                    }
                }
                break;
            }

            case 3:
            {
                int searchNo;
                bool found = false;

                cout << "Enter Ticket Number: ";
                cin >> searchNo;

                for(int i = 0; i < count; i++)
                {
                    if(t[i].ticketNo == searchNo)
                    {
                        cout << "\nTicket Found\n";
                        cout << "Ticket No: " << t[i].ticketNo << endl;
                        cout << "Passenger Name: " << t[i].name << endl;
                        cout << "Destination: " << t[i].destination << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Ticket Not Found!\n";

                break;
            }

            case 4:
            {
                int cancelNo;
                bool found = false;

                cout << "Enter Ticket Number to Cancel: ";
                cin >> cancelNo;

                for(int i = 0; i < count; i++)
                {
                    if(t[i].ticketNo == cancelNo)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            t[j] = t[j + 1];
                        }

                        count--;
                        found = true;

                        cout << "Ticket Cancelled Successfully!\n";
                        break;
                    }
                }

                if(!found)
                    cout << "Ticket Not Found!\n";

                break;
            }

            case 5:
            {
                cout << "Total Bookings = " << count << endl;
                break;
            }

            case 6:
            {
                cout << "Thank You!\n";
                break;
            }

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}