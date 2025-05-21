#if !defined(CURRENCY_OPERATORS)
#define CURRENCY_OPERATORS

#include <memory>
#include <iostream>
#include "Currency_System.h"

std::shared_ptr<Currency> operator+(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

std::shared_ptr<Currency> operator-(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

std::shared_ptr<Currency> operator*(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

std::shared_ptr<Currency> operator/(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);
bool operator==(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

bool operator!=(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

bool operator<(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

bool operator>(
    std::shared_ptr<Currency>, std::shared_ptr<Currency>);

#endif // CURRENCY_OPERATORS
