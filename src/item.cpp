#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <item.hpp>

using namespace std;

ostream & operator<<(ostream& outPut , const Item& item)
{
    return item.utilityPrint(outPut);
}