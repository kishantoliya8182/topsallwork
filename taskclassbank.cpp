#include<iostream>

using namespace std;

class bank{
	char name[50];
	char atype[30];
	long int anumber;
	long int blnc = 100000;
	long int damount;
	long int wamount;
	
	public:
		getdata(){
			cout<<"Enter Your Name:";
			cin>>name;
			cout<<"Enter Acount type:";
			cin>>atype;
			cout<<"Enter Acount number:";
			cin>>anumber;
		}

		deposit(){
			cout<<"\n==========Deposite==========";
			cout<<"\nEnter Amount:";
			cin>>damount;
			blnc = blnc+damount;
			cout<<"\nbalance:"<<blnc;
		}
		
		withdraw(){
//			cout<<"\ncheck blnc"<<blnc;
			cout<<"\n==========Withdraw==========";
		    cout<<"\nEnter Withdraw Amount:";
			cin>>wamount;
			if(wamount>blnc){
				cout<<"\ninsufficient balance";
			}else{
				blnc = blnc-wamount;
				cout<<"\nbalance:"<<blnc;
			}
		}
		
		detail(){
				 cout<<"\n==========Account Details==========";
				 cout<<"\nAccount Holder Name:\t"<<name;
				 cout<<"\nAccount Type:\t\t"<<atype;
				 cout<<"\nAccount Number:\t\t"<<anumber;
				 cout<<"\nBalance:\t\t"<<blnc;
		}
		
};


main(){
	bank bank;
	bank.getdata();
	bank.deposit();
	bank.withdraw();
	bank.detail();
}

