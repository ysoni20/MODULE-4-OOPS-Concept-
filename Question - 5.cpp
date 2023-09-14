/*Define a class to represent a bank account. Include the following members:
1. Data Member:
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
2. Member Functions
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance*/
	
#include<iostream>
using namespace std;

class bank_account{
	public:
	string name,ac_type;
	int ac_no;
	float balance,withdraw,deposit;
	
	void depositor_deatail()
	{
		cout<<"Account holder name : ";
		cin>>name;
		cout<<"What is the account number : ";
		cin>>ac_no;
		cout<<"What is the type of account (saving or current) : ";
		cin>>ac_type;
		cout<<"What is the account balance : ";
		cin>>balance;
	}
	
	void ac_detais()
	{
		cout<<"How many amount you want to deposit? : ";
		cin>>deposit;
		balance=balance+deposit;
		cout<<"After deposit your balance is : "<<balance<<endl;
	}
	
	void withrawal()
	{
		cout<<"How many amount you want to withdraw : ";
		cin>>withdraw;
		if(balance>=withdraw)
		{
			cout<<"No enough balance in your account";
		}
		balance=balance-withdraw;
		cout<<"After withdraw your balance is : "<<balance;
	}
	
};
int main()
{
	bank_account obj;
	obj.depositor_deatail();
	obj.ac_detais();
	obj.withrawal();
	return 0;
}
