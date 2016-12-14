#include "bank.h"

int option(){
	int option;
	cout<<"Enter your option\n";
	cin>>option;
	return option;
}
int main(){
        list <bank*> bank1;
	while(1){
        cout<<"Hello \n";
	long int number = 0;
	long int number1 = 0;
	int options;
	options = option();
		if(options == 1) { 
			bank *b;
        		b = new bank();
        		create_account(b);
        		bank1.push_back(b);
        		b->display();
			options = option();
		}
		if(options == 2) { 
			cout<<"Enter the account number\n";
			cin>>number;
			list<bank*>::iterator it;
        		for(it = bank1.begin(); it != bank1.end(); it++){
        			long int acc = (*it)->account_number_info();
                		if(acc == number){
                        		cout<<"account exists\n";
                        		debit_account(*it);
                		}
        		}
		}
		if(options == 3) { 
			cout<<"Enter the account number\n";
			cin>>number1;
			list<bank*>::iterator it1;
        		for(it1 = bank1.begin(); it1 != bank1.end(); it1++){
                		long int acc1;
				acc1  = (*it1)->account_number_info();
                		if(acc1 == number1){
                        		cout<<"account exists\n";
                        		debit_account(*it1);
                		}
        		}
		}
		else{ 
			cout<<"Please try again\n";
		}
	}
        return 0;
}

