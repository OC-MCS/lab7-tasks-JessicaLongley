#include <iostream>
#include <iomanip>
#include <string>

#include "RetailItem.h"
#
using namespace std;

void displayItems(RetailItem Store[], int numItems);
//void loadItems();

int main()
{
    RetailItem Store[] = { RetailItem("Jacker", 12, 59.95),
                           RetailItem("Designer Jeans", 20, 79.23),
                           RetailItem("Shirt", 12, 5.00) };

    displayItems(Store, 3);

	return 0;
}

//void loadItems()

void displayItems(RetailItem Store[], int numItems)
{
    for (int count = 0; count < numItems; count++)
    {
        //display header
        cout << setw(5) << "Description" << setw(15) << "Units On Hand" << setw(10) << "Price" << endl;
        //display items
        cout << Store[count].getDescription() << " ";
        cout << setw(15) << Store[count].getUnitsOnHand() << " ";
        cout << setw(15) << Store[count].getPrice() << " " << endl;

    }
}