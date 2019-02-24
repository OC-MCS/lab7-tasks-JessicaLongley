#include <string>
#include "RetailItem.h"
using namespace std;

//constructor
RetailItem::RetailItem(string desc, int units, double pri)
{
    description = desc;
    unitsOnHand = units;
    price = pri;
}
string RetailItem::getDescription()
{
    return description;
}
int RetailItem::getUnitsOnHand()
{
    return unitsOnHand;
}
double RetailItem::getPrice()
{
    return price;
}
double RetailItem::getStockValue()
{
    return (price * unitsOnHand);
}

