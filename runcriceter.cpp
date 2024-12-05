#include<iostream>
using namespace std;
class batsman
{
	public:
		int total_run[5],av_run,best_per[5];
		
		void inputdata()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"\nenter ["<<i+1<<"]criceter total run=";
				cin>>total_run[i];
			}
		}
};

class result:public batsman
{
	public:
		void avgrun()
		{
			
		
		av_run=(total_run[0]+total_run[1]+total_run[2]+total_run[3]+total_run[4])/5;
		cout<<"\nAverage run is="<<av_run;
	}
	
	void per()
	{
		for(int i=0;i<5;i++)
		if(total_run[0]<total_run[i])
		{
			total_run[0]=total_run[i];
		}
		
		cout<<"\nBest perfomance ="<<total_run[0];
	}
};

main()
{
	result rt;
	rt.inputdata();
	rt.avgrun();
	rt.per();
}

