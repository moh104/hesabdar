#include "IRR.h"

Irr::Irr(double irr_currency) : Currency(irr_currency) {}

double Irr::to_usd() const {
    return get_amount() / 80.0;
}

std::string Irr::get_unit() const {
    return "IRR";
}