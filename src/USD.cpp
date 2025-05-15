#include "USD.h"

Usd::Usd(double& usd_currency) : Currency(usd_currency) {}


double Usd::to_usd() const {
    return get_public_currency();
}

std::string Usd::get_unit() const {
    return "USD";
}