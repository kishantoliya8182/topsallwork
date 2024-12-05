#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fl("name.txt",ios::app);
	
	int i;
	for(i=1;i<=100;i++)
	{
		cout<<i;
	    fl<<i<<"\n";
	}
	
}
