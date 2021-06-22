
#include <iostream>
#include<vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main(){
    cout.precision(2);
    cout<<fixed;
    
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"Curly", 50000});
    
    
    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);
 
//Savings Account
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Modi"});
    sav_accounts.push_back(Savings_Account{"KCR",2000});
    sav_accounts.push_back(Savings_Account{"IAS", 50000, 5.0});
    
    
    display(sav_accounts);
    deposit(sav_accounts,1000);
    withdraw(sav_accounts,2000);
    
    

///Checking Account

    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Ram"});
    check_accounts.push_back(Checking_Account{"Victor",2000});
    check_accounts.push_back(Checking_Account{"Ignis", 50000});
    
    
    display(check_accounts);
    deposit(check_accounts,1000);
    withdraw(check_accounts,2000);
    
    
    
    ///Trust Account
    
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Jimmy", 10000,5.0});
    trust_accounts.push_back(Trust_Account{"Vicky",20000,4.0});
    trust_accounts.push_back(Trust_Account{"Ivanka", 50000});
    
    
    display(trust_accounts);
    deposit(trust_accounts,1000);
    withdraw(trust_accounts,2000);
    return 0;
   
}