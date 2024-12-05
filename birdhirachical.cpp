#include<iostream>
using namespace std;
class bird
{
	public:
	long int	fly;
	 char name[30];
	 char  color[30];
	 
	 void nam()
   {
   	cout<<"\n===========Enter Details==================";
   	cout<<"\nenter bird name=";
   	cin>>name;
   	cout<<"\nenter bird color= ";
   	cin>>color;
   	cout<<"\nenter flying miter in the sky=";
   	cin>>fly;
	   }
	 
};
class eagle:public bird
{   public:
	void getdata(){
	   	cout<<"\n=============================================";

   cout<<"\nBird Name="<<name;
   cout<<"\nBird color="<<color;
   cout<<"\nflying miter="<<fly;
}
};

class swift:public bird
{   
    public:
	void printdata()
	{
	   	cout<<"\n======================================";

	cout<<"\nBird Name="<<name;
   cout<<"\nBird color="<<color;
   cout<<"\nflying miter="<<fly;}
};


main()
{
	eagle eg;
	swift sf;
	eg.nam();
	eg.getdata();
	sf.nam();
	sf.printdata();
}







