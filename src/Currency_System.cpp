#include "Currency_System.h"
Currency::Currency(const double& public_class) {
    this->public_currency = public_class;
}


double Currency::get_public_currency() const {
    return public_currency;
}


void Currency::print() const {
    std::cout << public_currency << " " << get_unit();
}