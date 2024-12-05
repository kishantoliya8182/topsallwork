#include<iostream>
#include<ctime>
using namespace std;
class ATM
{
	private:
		int atmpin;
		int ibal;
		int cbal;
	public:ATM()
	{
		atmpin=12345;
		ibal=60000;
		cbal=20000;
	}
	public:
	void datetime()
	{
		cout<<"\n";
		cout<<"         ||||||||||||||||||| WELCOME TO ATM |||||||||||||||||||";
		cout<"\n\n--------------------------------------";
		cout<<"\n\n";
		
		time_t now = time(0);
		char*  dt = ctime(&now);
		cout<<"\n      Current Date and Time :"<<dt;
		cout<"\n\n";
		cout<<"             ---------------------------------";
	}
	public:
	void menu()
	{
		cout<<"\n\tPress 1 and then press Enter to access your account via pin number ";
		cout<<"\n \t\t\t or";
		cout<<"\n\tpress 0 and press enter to get help.";

	}
	public:
	void pin()
	{
		int pin;
		cout<<"Enter your acc pin Access number[Only one attempt allowed]: ";
		cin>>pin;
		if (pin==atmpin)
		{
			cout<<"PIN Accepted , Welcome";
			menuscreen();
		}
		else
		{
			cout<<"Sorry...Incorrect PIN ";
		}
	}
	public:
	void helpscreen()
	{
		cout<<"|||||||||||||| ATM ACCOUNT STATUS ||||||||||||||";
		cout<<"\n You have must the correct pin number to access this account.see your bank";
		cout<<"n reprresentative for accictance during bank opening hours";
		
	}
	public:
	void menuscreen()
	{
		cout<<"\t\t\t ATM main menu Screen";
		cout<<"\n\n";
		cout<<"Enter 1 TO deposite cash";
		cout<<"Enter 2 TO withdraw cash";
		cout<<"Enter 3 TO Balance inquiry";
		cout<<"Enter 0 TO Exit ATM";
	}
	public:
	void depoamount()
	{
		int amount;
		cbal+=amount;
		cout<<"Deposite successfull..";
		cout<<"\n Current Balance is rs. "<<cbal;
	}
	public:
	void wdoamount()
	{
		int amount;
		if(cbal>amount)
		{
			cbal=cbal-amount;
			cout<<"\nWithdraw successfull..";
			cout<<"\ncurrent balance is rs." <<cbal;	
		}
		else
		{
			cout<<"\nInsufficiant Available Balance in your account.";
			cout<<"\n\n";
			cout<<"Sorry!";
		}
	}
	public:
	void dispbal()
	{
	ATM atm;
	//atm.menu();
	//atm.datetime();
		cout<<"Current Balance is..rs "<<cbal;
	}
};
int main()
{
	 
	//atm.depoamount();
	//atm.wdoamount();
	//atm.dispbal();
	
	int choice;
	do
	{
		atm.menu();
		cout<<"\n      	Enter your Choice: ";
		cin>>choice;
		cout<<"\t\t\t ATM main menu Screen";
		cout<<"\n\n";
		cout<<"\nEnter 1 TO deposite cash";
		cout<<"\nEnter 2 TO withdraw cash";
		cout<<"\nEnter 3 TO Balance inquiry";
		cout<<"\nEnter 0 TO Exit ATM";
		
		switch(choice)
		{
			case 1:
			atm.pin();
			break;
			case 2:
			atm.helpscreen();
			break;
			default:
			cout<<"Invalid choice..";
		}
	}while(choice!=0);
}
			
	
