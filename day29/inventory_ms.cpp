#include <bits/stdc++.h>
using namespace std;

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    Product p[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Product ID: ";
                cin >> p[n].id;

                cin.ignore();

                cout << "Enter Product Name: ";
                cin.getline(p[n].name, 50);

                cout << "Enter Quantity: ";
                cin >> p[n].quantity;

                cout << "Enter Price: ";
                cin >> p[n].price;

                n++;

                cout << "Product Added Successfully!";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No products available!";
                }
                else
                {
                    cout << "\nID\tName\t\tQuantity\tPrice\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << p[i].id << "\t"
                             << p[i].name << "\t\t"
                             << p[i].quantity << "\t\t"
                             << p[i].price << endl;
                    }
                }
                break;

            case 3:
            {
                int searchId;
                bool found = false;

                cout << "Enter Product ID to search: ";
                cin >> searchId;

                for(int i = 0; i < n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        cout << "\nProduct Found:";
                        cout << "\nID: " << p[i].id;
                        cout << "\nName: " << p[i].name;
                        cout << "\nQuantity: " << p[i].quantity;
                        cout << "\nPrice: " << p[i].price;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Product not found!";
                break;
            }

            case 4:
                cout << "Exiting System...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}