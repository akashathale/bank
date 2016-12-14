#include "bank.h"
using namespace std;
void credit_amount(bank *b){
        int credit_amount = 0;
	int balance = 0;
        cout<<"The details are follows \n";
        cout<<"Account holder name \n";
        b->display();
        cout<<"Enter the amount to be debited\n";
        cin>>credit_amount;
        balance = b->acc_balance_info() + credit_amount;
        cout<<"New balance is \n";
        cout<<balance;
        b->acc_balance_c(balance);
}

