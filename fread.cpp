#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fl("name.txt");
	string i;
	
	while(getline(fl,i))
	{
		cout<<i<<"\n";
	}
}
