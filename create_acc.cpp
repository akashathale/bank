#include "bank.h"
using namespace std;

void create_account(bank *b){
        char *name;
        long int acc_num;
        int bal;
        cout<<"Enter the customer name\n";
        cin>>name;
        cout<<"Enter a new account number\n";
        cin>>acc_num;
        cout<<"Enter the customer initial balance\n";
        cin>>bal;
        b->customer_name(name);
        b->account_no(acc_num);
        b->acc_balance_c(bal);
}

