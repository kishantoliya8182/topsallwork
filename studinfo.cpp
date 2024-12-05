#include<iostream>
using namespace std;
class stud
{
	
	public:
		void getdata(int id,char name[20])
		{
			cout<<"ID:"<<id;
			cout<<"\nName:"<<name;
		}
		
		
};
main()
{
	
	stud st;
	int stid;
	char stnm[20];
	
	cout<<"enter your id=";
	cin>>stid;
	cout<<"\nenter your name=";
	cin>>stnm;
	
	st.getdata(stid,stnm);

}

