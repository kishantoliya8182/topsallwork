#include<iostream>
using namespace std;

class getdata{
	public:
	char name[30];
	char atype[30];
	long int anum;
	long int blc=100000;
	long int withdro;
	long int damount;
	void get(){
	
	cout<<"\n-------enter your details please---------";
		cout<<"\nenter your name=";
		cin>>name;
		cout<<"\nenter your account type=";
		cin>>atype;
		cout<<"\nenter your account number=";
		cin>>anum;
		cout<<"\nyour Balance ="<<blc;
	}
		
};


class deposite:public getdata
{
	
  cout<<"\n------------------Deposite----------------------";
		cout<<"\nenter deposite ammount=";
		cin>>damount;
		blc=blc+damount;	
};
