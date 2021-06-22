#include "Account_Util.h"
#include<iostream>


void display(const std::vector<Account> &accounts){
    std::cout<<"\n ====Account=========="<<std::endl;
    for(const auto &acc:accounts)
        std::cout << acc<< std::endl;
}
void deposit(std::vector <Account> &accounts, double amount){
    std::cout<<"\n ======Deposit Account====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount))
            std::cout<<"Depoisted"<<amount<<"to" << acc<<std::endl;
        else
            std::cout<<"Failed to depoist the amount"<<amount<<"to"<<acc<<std::endl;
    }
    
}
void withdraw(std::vector <Account> &accounts, double amount){
    std::cout<<"\n ====Withdraw ====="<< std::endl;
    for(auto &acc:accounts){
        
        if(acc.withdraw(amount))
            std::cout<<"Withdraw successful of"<<amount<<"from"<<acc << std::endl;
        else
            std::cout<<"Failed to withdraw "<< amount<<"from"<<acc<< std::endl;
    }
}




/////Savings Account

void display(const std::vector<Savings_Account> &accounts){
    std::cout<<"\n ====Savings Account=========="<<std::endl;
    for(const auto &acc:accounts)
        std::cout << acc<< std::endl;
}
void deposit(std::vector <Savings_Account> &accounts, double amount){
    std::cout<<"\n ======Savings Deposit Account====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount))
            std::cout<<"Depoisted"<<amount<<"to" << acc<<std::endl;
        else
            std::cout<<"Failed to depoist the amount"<<amount<<"to"<<acc<<std::endl;
    }
    
}
void withdraw(std::vector <Savings_Account> &accounts, double amount){
    std::cout<<"\n ====Savings Withdraw ====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            std::cout<<"Withdraw successful of"<<amount<<"from"<<acc << std::endl;
        else
            std::cout<<"Failed to withdraw "<< amount<<"from"<<acc<< std::endl;
    }
}




////Checking Account

void display(const std::vector<Checking_Account> &accounts){
    std::cout<<"\n ====Checking Account=========="<<std::endl;
    for(const auto &acc:accounts)
        std::cout << acc<< std::endl;
}
void deposit(std::vector <Checking_Account> &accounts, double amount){
    std::cout<<"\n ======Checking Deposit Account====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount))
            std::cout<<"Depoisted"<<amount<<"to" << acc<<std::endl;
        else
            std::cout<<"Failed to depoist the amount"<<amount<<"to"<<acc<<std::endl;
    }
    
}
void withdraw(std::vector <Checking_Account> &accounts, double amount){
    std::cout<<"\n ====Checking Withdraw ====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            std::cout<<"Withdraw successful of"<<amount<<"from"<<acc << std::endl;
        else
            std::cout<<"Failed to withdraw "<< amount<<"from"<<acc<< std::endl;
    }
}

//Trust Account

void display(const std::vector<Trust_Account> &accounts){
    std::cout<<"\n ====Trust Account=========="<<std::endl;
    for(const auto &acc:accounts)
        std::cout << acc<< std::endl;
}
void deposit(std::vector <Trust_Account> &accounts, double amount){
    std::cout<<"\n ======Trust Deposit Account====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount))
            std::cout<<"Depoisted"<<amount<<"to" << acc<<std::endl;
        else
            std::cout<<"Failed to depoist the amount"<<amount<<"to"<<acc<<std::endl;
    }
    
}
void withdraw(std::vector <Trust_Account> &accounts, double amount){
    std::cout<<"\n ====Trust Withdraw ====="<< std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            std::cout<<"Withdraw successful of"<<amount<<"from"<<acc << std::endl;
        else
            std::cout<<"Failed to withdraw "<< amount<<"from"<<acc<< std::endl;
    }
}