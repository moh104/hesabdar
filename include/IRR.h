#if !defined(IRR)
#define IRR
#include "Currency_System.h"

class Irr : public Currency {
public:
    Irr(double&);

    double to_usd() const override;
    std::string get_unit() const override;

};


#endif // IRR
