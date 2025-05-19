#if !defined(CURRENCY_SYSTEM)
#define CURRENCY_SYSTEM

#include <iostream>
#include <string>

class Currency {
private:
    double amount;

public:
    Currency(const double&);

    virtual double to_usd() const = 0;
    virtual std::string get_unit() const = 0;
    virtual void print() const;

    double get_amount() const;

    virtual ~Currency();


};

#endif // CURRENCY_SYSTEM
