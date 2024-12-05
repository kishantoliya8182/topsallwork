#include<iostream>
using namespace std;

int a,b;

input()
{
		cout<<"enter a first number=";
	cin>>a;
	cout<<"\nenter a second number=";
	cin>>b;

	
}

int add()
{

	cout<<"\n addition="<<a+b;
}
int sub()
{

	cout<<"\n subtraction="<<a-b;
}

int mul()
{

	cout<<"\n multiplication="<<a*b;
}

int div()
{

	cout<<"\n division="<<a/b;
}




main()
{
		int op,ans;

	input();
		
	cout<<"\nenter opretor";

	cout<<"\nenter 1 if u want to addtion ";
	cout<<"\nenter 2 if u want to subtraction ";
	cout<<"\nenter 3 if u want to multiplication ";
	cout<<"\nenter 4 if u want to division ";
	
	cout<<"\nenter your oprator";
	cin>>op;

		
	
	switch(op)
	{
		case 1:
			
  			 
  			 add();
			break;
			
		case 2:
			  sub();
			break;
			
		case 3:
			 mul();
			break;
			
		case 4:
			div();
			break;
			
		default:
			cout<<"/nlease enter a valid oprator";
			break;
}
}
