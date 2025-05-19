#if !defined(USD)
#define USD

#include "Currency_System.h"

class Usd : public Currency {
public:
    Usd(double&);
    double to_usd() const override;
    std::string get_unit() const override;
};


#endif // USD
