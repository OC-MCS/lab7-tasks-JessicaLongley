#pragma once

#include <string> //I need to put this here to make the code compile but it seems wrong. How do I make this better?
using namespace std;
class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;
public:
    //constructor
    RetailItem(string desc, int units, double pri);
    //accessor functions
    string getDescription();
    int getUnitsOnHand();
    double getPrice();
    double getStockValue();
};
