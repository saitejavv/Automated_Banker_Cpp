#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    :Savings_Account{name,balance, int_rate}, num_withdrawal{0}
{
}

bool Trust_Account::deposit(double amount)
{if (amount >= bonus_amount_threshold)
    amount += bonus_amount;
else{
    return Savings_Account::deposit(amount);
} 
}
bool Trust_Account::withdraw(double amount){
    if (num_withdrawal>= max_withdrawal||(amount>balance*max_withdrawal_percent))
        return false;
else {
    ++num_withdrawal;
    return Savings_Account::withdraw(amount);
    }
}


std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
    os<<"[Trust_Account:" << account.name<<":"<<account.balance<<","<< account.int_rate<<"%, withdrawals:"<< account.num_withdrawal<< "]";
    return os;
}




