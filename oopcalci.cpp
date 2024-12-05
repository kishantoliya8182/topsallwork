#include<iostream>
using namespace std;
class clci
{
	public:
		int a;
		int b;
		void getdata()
		{
		  cout<<"enter first num=";
		  cin>>a;
		  cout<<"enter second num=";	
		  cin>>b;
		}
		void add()
		{
			cout<<"\nAddition="<<a+b;
		}
		void sub()
		{
			cout<<"\nsubtraction="<<a-b;
		}
		void mul()
		{
			cout<<"\nmultiplication="<<a*b;
		}
		void div()
		{
			cout<<"\nDivision="<<a/b;
		}
		
};
main()
{
	int ch;
	clci cl;
	cout<<"\nenter your choice for calculate";
	cout<<"\nenter 1 for additon";
	cout<<"\nenter 2 for sunbtraction";
	cout<<"\nenter 3 for multiplication";
	cout<<"\nenter 4 for division";
	cin>>ch;
	
	cl.getdata();
	if(ch==1)
	{
	
	cl.add();
}
else if(ch==2)
{

	cl.sub();
}else if(ch==3)
{

	cl.mul();
}
else if(ch==4)
{

	cl.div();
}
else
{
	cout<<"ERROR !please enter valid number";
}
}






