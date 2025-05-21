// Currency_Operators.cpp
#include "Currency_Operators.h"
#include "USD.h"
#include "EUR.h"
#include "IRR.h"
#include <stdexcept>

std::shared_ptr<Currency> operator+(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2)
{
    if (currency1->get_unit() != currency2->get_unit()){
        throw std::invalid_argument("Currencies must be the same.");
    }
        
    const double result = currency1->get_amount() + currency2->get_amount();

    if (currency1->get_unit() == "USD") {
        return std::make_shared<Usd>(result);
    } 
    if (currency1->get_unit() == "EUR") {
        return std::make_shared<Eur>(result);
    }
    if (currency1->get_unit() == "IRR") {
        return std::make_shared<Irr>(result);
    }

    throw std::runtime_error("Currency type not supported.");
}

std::shared_ptr<Currency> operator-(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2)
{
    if (currency1->get_unit() != currency2->get_unit()) {
        throw std::invalid_argument("Currencies must be the same.");
    }
    if((currency1->get_amount() - currency2->get_amount()) < 0) {
        throw std::runtime_error("The operation cannot be performed.");
    }

    const double result = currency1->get_amount() - currency2->get_amount();
    
    if (currency1->get_unit() == "USD") {
        return std::make_shared<Usd>(result);
    }
    if (currency1->get_unit() == "EUR") {
        return std::make_shared<Eur>(result);
    }
    if (currency1->get_unit() == "IRR") {
        return std::make_shared<Irr>(result);
    }

    throw std::runtime_error("Currency type not supported.");
}

std::shared_ptr<Currency> operator*(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2)
{
    if(currency1->get_unit() != currency2->get_unit()) {
        throw std::invalid_argument("Currencies must be the same.");
    }

    const auto result = currency1->get_amount() * currency2->get_amount();
     
    if (currency1->get_unit() == "USD") {
        return std::make_shared<Usd>(result);
    }
    if (currency1->get_unit() == "EUR") {
        return std::make_shared<Eur>(result);
    }
    if (currency1->get_unit() == "IRR") {
        return std::make_shared<Irr>(result);
    }

    throw std::runtime_error("Currency type not supported.");

}

std::shared_ptr<Currency> operator/(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2)
{
     if(currency1->get_unit() != currency2->get_unit()) {
        throw std::invalid_argument("Currencies must be the same.");
    }
    
    const auto result = currency1->get_amount() / currency2->get_amount();

    if (currency1->get_unit() == "USD") {
        return std::make_shared<Usd>(result);
    }
    if (currency1->get_unit() == "EUR") {
        return std::make_shared<Eur>(result);
    }
    if (currency1->get_unit() == "IRR") {
        return std::make_shared<Irr>(result);
    }

    throw std::runtime_error("Currency type not supported.");

}

bool operator==(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2) {
    return (currency1->get_unit() == currency2->get_unit()) && (currency1->get_amount() == currency2->get_amount());
}

bool operator!=(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2) {
    return !(currency1 == currency2);
}

bool operator<(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2) {
    return currency1->to_usd() < currency2->to_usd();
}

bool operator>(std::shared_ptr<Currency> currency1, std::shared_ptr<Currency> currency2) {
    return currency1->to_usd() > currency2->to_usd();
}