#include<iostream>
using namespace std;
class vehical
{
   public:
   int n,i;
   char vhnm[5][20];	
   
   
   void totalvehical()
   {
   	cout<<"\n\nenter total number of vehical=";
   	cin>>n;
   }
};
class bus:public vehical
{
	public:
		void getbus()
		{
			for(i=0;i<n;i++)
			{
				cout<<"\n\nEnter bus details";
				cin>>vhnm[];
			}
			for(i=0;i<n:i++)
			{
				cout<<"\n\tbus["<<i<<"]="<<vhnm[i];
			}
		}
};

class car:public vehical
{
	public:
		void getcar()
		{
			for(i=0;i<n;i++)
			{
				cout<<"\n\nenter car details:";
				cin>>vhnm[i];
				
			}
			for(i=0;i<n;i++)
			{
				cout<<"\n\tcar["<<i<<"]="<<vhnm[i];
				
			}
		}
};
main()
{
	bus bs;
	car cr;
	bs.totalvehical();
	bs.getbus();
	
	cr.totalvehical();
	cr.getcar();
}








