#include "Currency_System.h"
Currency::Currency(const double amount) {
    this->amount = amount;
}


double Currency::get_amount() const {
    return amount;
}


void Currency::print() const {
    std::cout << amount << " " << get_unit() << std::endl;
}

Currency::~Currency(){}