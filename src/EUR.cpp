#include "EUR.h"

Eur::Eur(double& eur_currency) : Currency(eur_currency) {}

double Eur::to_usd() const {
    return get_amount() * 1.1203;
}

std::string Eur::get_unit() const {
    return "EUR";
}