#if !defined(CURRENCY_SYSTEM)
#define CURRENCY_SYSTEM

#include <iostream>
#include <string>

class Currency {
private:
    double public_currency;

public:
    // Currency();
    Currency(const double&);

    virtual double to_usd() const = 0;
    virtual std::string get_unit() const = 0;
    virtual void print() const;

    double get_public_currency() const;



};

#endif // CURRENCY_SYSTEM
