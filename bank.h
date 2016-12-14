#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;
class bank{
	char *acc_holder;
	long int acc_number;
	int acc_balance;
	static int count;
	public:
/*Initialize values while creating account*/
	void customer_name(char *name){
		acc_holder = name;
	}

	void account_no(long int number){
		acc_number = number;
	}

	void acc_balance_c(int balance){
		acc_balance = balance;
	}
/*Return information for an account*/
	char* account_name_info(){
		return acc_holder;
	}

	long int account_number_info(){
		return acc_number;
	}

	int acc_balance_info(){
		return acc_balance;
	}
/*Display information of an account*/
	void display(){
		cout<<acc_holder;
		cout<<acc_number;
		cout<<acc_balance;
	}
/*static int count function*/
/*
	static void count_tracker(){
		count++;
	}

	static int count_return(){
		return count;
	}

	void store_bank_obj_list(bank *b){
		bank b = *b;
*/		
	friend void debit_account(bank*);
	friend void credit_account(bank*);
	friend void create_account(bank*);
};

void debit_account(bank*);
void credit_account(bank*);
void create_account(bank*);

