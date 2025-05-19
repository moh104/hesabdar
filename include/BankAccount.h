#if !defined(BANCKACCOUNT)
#define BANCKACCOUNT

#include <string>
#include <memory>
#include "Currency_System.h"

enum class AccountType {
    PERSONAL,
    ORGANIZATION
};

class BankAccount {
private:
    std::string holder_name; 
    std::string account_number;
    AccountType type;
    std::shared_ptr<Currency> currency;
    double balance;
    double daily_limit;
    double daily_transferred;

public:
    BankAccount(const std::string&, const std::string&, const AccountType, std::shared_ptr<Currency>, const double& = 0.0);

    bool deposit(const double&);
    bool withdraw(const double&);

    double get_balance() const;

    std::string get_account_number() const;
    std::string get_holder_name() const;

    AccountType get_account_type() const;
    
    std::shared_ptr<Currency> get_currency() const;

    void reset_daily_transfer();
};

#endif // BANCKACCOUNT
