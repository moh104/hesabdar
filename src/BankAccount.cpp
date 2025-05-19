#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string& holder_name, const std::string& account_number, AccountType account_type, std::shared_ptr<Currency> currency, const double& balance) {
    this->holder_name = holder_name;
    this->account_number = account_number;
    this->type = account_type;
    this->currency = currency;
    this->balance = balance;

    if(type == AccountType::PERSONAL) {
        daily_limit = 1000.0;
    }
    else {
        daily_limit = 10000.0;
    }
}

bool BankAccount::deposit(const double& amount) {
    if (amount <= 0) {
        return false;
    }
    balance += amount;
    return true;
}

bool BankAccount::withdraw(const double& amount) {
    if(amount <= 0 || amount > balance || (daily_transferred + amount) > daily_limit) {
        return false;
    }
    balance -= amount;
    daily_transferred += amount;
    return true;
}

double BankAccount::get_balance() const {
    return balance;
}

std::string BankAccount::get_account_number() const {
    return account_number;
}

std::shared_ptr<Currency> BankAccount::get_currency() const {
    return currency;
}

void BankAccount::reset_daily_transfer() {
    daily_transferred = 0.0;
}

