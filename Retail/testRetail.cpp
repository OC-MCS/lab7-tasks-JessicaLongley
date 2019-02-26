#include <iostream>
#include <iomanip>
#include <string>
#include "RetailItem.h"
#include <vector>
#include <fstream>

using namespace std;

void loadItems(vector<RetailItem> & Items);
void displayItems(RetailItem Store[], int numItems);
void displayItems(vector<RetailItem> & Items);

//void loadItems();

int main()
{
    RetailItem Store[] = { RetailItem("Jacker", 12, 59.95),
                           RetailItem("Designer Jeans", 20, 79.23),
                           RetailItem("Shirt", 12, 5.00) };

    //displayItems(Store, 3);

    vector<RetailItem> Items;
    loadItems(Items);

    displayItems(Items); //size of what?
	return 0;
}


void loadItems(vector<RetailItem> & Items)
{
    string str, input;
    int units;
    double price;
    //open csv file
    ifstream file;
    vector<RetailItem> vec; //vector to hold infortamtion being read in
    int num;
    file.open("RetailProject.csv");
    if (!file)
    {
        cout << "Error on open" << endl;
    }
    //read and add file to Items object
    //cin.ignore();
    while (getline(file, str, ',')) //what do I put for this line?
    {
       getline(file, input, ',');
       units = stoi(input);

       getline(file, input);
       price = stod(input);

        RetailItem Item(str, units, price);
        Items.push_back(Item); //add to the end of the vector
    }

    file.close();
}

void displayItems(RetailItem Store[], int numItems)
{
    for (int count = 0; count < numItems; count++)
    {
        //display header
        cout << setw(5) << "Description" << setw(20) << "Units On Hand" << setw(10) << "Price" << endl;
        //display items
        cout << Store[count].getDescription() << " ";
        cout << setw(40) << Store[count].getUnitsOnHand() << " ";
        cout << setw(15) << Store[count].getPrice() << " " << endl;

    }
}
void displayItems(vector<RetailItem> & Items)
{
    double money = 0; //for adding total inventory value

    //display header
    cout << setw(5) << "Description" << setw(14) << "On Hand" << setw(10) << "Price" << setw(10)<< "Value" << endl;

    for (int count = 0; count < Items.size(); count++)
    {
        //display items
        cout << left << setw(20) << Items[count].getDescription();
        cout << setw(8) << Items[count].getUnitsOnHand();
        cout << setw(0) << "$" << Items[count].getPrice();
        cout << right << setw(8) << "$" << Items[count].getUnitsOnHand() * Items[count].getPrice() << endl;

        money += Items[count].getPrice();
    }

    cout << "Total inventory value:$ " << money;
}