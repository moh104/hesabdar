#include "Currency_System.h"
Currency::Currency(const double& public_class) {
    this->amount = public_class;
}


double Currency::get_amount() const {
    return amount;
}


void Currency::print() const {
    std::cout << amount << " " << get_unit();
}

Currency::~Currency(){}