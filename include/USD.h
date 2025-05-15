#if !defined(USD)
#define USD

#include "Currency_System.h"

class usd : public Currency {
public:
    usd(double& amt);
    double to_usd() const override;
    std::string get_unit() const override;
};


#endif // USD
