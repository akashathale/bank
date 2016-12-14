#include "bank.h"

using namespace std;

void debit_account(bank *b){
	int debit_amount = 0;
	int balance = 0;
 	cout<<"The details are follows \n";
        cout<<"Account holder name \n";
        b->display();
	cout<<"Enter the amount to be debited\n";
	cin>>debit_amount;
        balance = b->acc_balance_info() - debit_amount;
        cout<<"New balance is \n";
        cout<<balance;
	b->acc_balance_c(balance);
}

	
