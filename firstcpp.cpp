#include<iostream>
using namespace std;
main()
{
	int n,i,stid[10];
	char stname[5][20];
	
	cout<<"enter number of student=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter your id=";
		cin>>stid[i];
		cout<<"\n";
		cout<<"enter your name=";
		cin>>stname[i];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nID["<<i<<"]="<<stid[i];
		cout<<"\nNAME["<<i<<"]="<<stname[i];
	}
}
