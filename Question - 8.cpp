//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

//single inheritance.
#include<iostream>
using namespace std;
class cricketer{
	public:
	int total_runs,avg_runs,players;
	string best;
};
class batsman:public cricketer{
	public:
	void get()
	{
		cout<<"Enter Total runs :"<<endl;
		cin>>total_runs;
//		cout<<"Enter Average runs :"<<endl;
//		cin>>avg_runs;
		cout<<"Best Player :"<<endl;
		cin>>best;
		cout<<"Enter How many players :"<<endl;
		cin>>players;
	}
	
	int avg()
	{
		avg_runs=total_runs/players;
		cout<<"Average of Batting is :"<<avg_runs<<endl;
		return avg_runs;
	}
	
	void display()
	{
		cout<<"Total runs of this match is :"<<total_runs<<endl;
		cout<<"Average runs of this match is :"<<avg_runs<<endl;
		cout<<"Man Of the match is :"<<best<<endl;
	}
};
int main()
{
	batsman obj1;
	obj1.get();
	obj1.avg();
	obj1.display();
	return 0;
}

