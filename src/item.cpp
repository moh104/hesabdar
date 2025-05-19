#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <item.hpp>

using namespace std;

ostream & operator<<(ostream& outPut , const Item& item)
{
    return item.utilityPrint(outPut);
}

Item::Item(const string& i_name , double i_price , int i_inventory , const string &i_unit)
{
    setName(i_name);
    setPrice(i_price);
    setInventory(i_inventory);
    setUnit(i_unit);
}

ostream & Item::utilityPrint(ostream& outPut) const noexcept
{
    outPut<< left << setw(8) << name << " $" << setw(10) << getPrice()
        << " per " << setw(8) << getUnit() << " ((Quantity ---> " << setw(3) << getSoldCount() << ' ' << getUnit() << "))";

    return outPut;
}