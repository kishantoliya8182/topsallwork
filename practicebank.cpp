#include<iostream>
using namespace std;
 
class bank{
	public:
	char name[30];
	char atype[30];
	long int anum;
	long int blc=100000;
	long int withdro;
	long int damount;
	
	void getdat()
	{
		cout<<"\n-------enter your details please---------";
		cout<<"\nenter your name=";
		cin>>name;
		cout<<"\nenter your account type=";
		cin>>atype;
		cout<<"\nenter your account number=";
		cin>>anum;
		cout<<"\nyour Balance ="<<blc;
	}
	
	void deposite()
	{
		cout<<"\n------------------Deposite----------------------";
		cout<<"\nenter deposite ammount=";
		cin>>damount;
		blc=blc+damount;
	}
	
	void withdraw()
	{
		cout<<"\n--------------------Withdraw--------------------";
		cout<<"\nenter withdraw ammount=";
		cin>>withdro;
		if(blc<withdro)
		{
			cout<<"\ninsufficient ammount";
		}
		else
		{
			blc=blc-withdro;
			cout<<"\nsuccessfully withdraw aamount";
		}
	}
	
	void statement()
	{
		cout<<"\n------------------transection statement---------------------";
		cout<<"\n name="<<name;
		cout<<"\n account type="<<atype;
		cout<<"\naccount number="<<anum;
		cout<<"\nDeposite ammount="<<damount;
		cout<<"\nWithdrow ammount="<<withdro;
		cout<<"\nCurrent Balance="<<blc;
		
	}
	
	
};


main()
{
	bank bk;
	bk.getdat();
	bk.deposite();
	bk.withdraw();
	bk.statement();
}



