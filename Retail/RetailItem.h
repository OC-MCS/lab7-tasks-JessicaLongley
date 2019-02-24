#pragma once
//#include<string>

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
