#if !defined(EUR)
#define EUR

#include "Currency_System.h"

class Eur : public Currency {
public:
    Eur(double&);
    double to_usd() const override;
    std::string get_unit() const override;
};


#endif // EUR
