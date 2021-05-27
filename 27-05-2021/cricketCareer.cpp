#include <iostream>
using namespace std;
class Career
{   
    //we declare properties
	string name;
    int jersyNo;
    int age;
    mutable int runs;
    mutable int catches;
    mutable int averages;
    mutable int nums=1;
	public :
		//this constructor used to store the constant values and mutable int values initialise as 0
	    Career(string Name,int no,int Age,int Catch,int run,int average) 
		{
			name=Name;
			jersyNo=no;
			age=Age;
			runs=run;
			catches=Catch;
			averages=average;
		}
		//we set the runs and catches every match
		void setRunsAndCatches(int r,int Catch)const
		{
			runs+=r;
			catches+=Catch;
		}
		//we set the averages every match 
		void setAvg() const
		{
			averages=runs/nums;
			nums++;
		}
		//we get details using this function
		void getDetails() const
		{
		    cout << " Name : " << name << endl;
			cout << " Jersy No : " << jersyNo << endl;
			cout << " Age : " << age << endl;
			cout << " Runs : " << runs << endl;
			cout << " Catches : " << catches << endl;
			cout << " Averages : " << averages << endl;	
		}
};

int main()
{
   const Career Player("Dhoni",7,40,0,0,0);
   Player.getDetails();
  int a=1;
  while(1)
  { 
    cout <<"        \n********Match "<< a << " **********\n" << endl;
  	int runs,catches,averages;
  	cout << "        \nEnter The "<< a << " Match runs :  " << endl;
  	cin >> runs;
  	cout << "        \nEnter The "<< a << " Match catches : " << endl;
  	cin >> catches;
    Player.setRunsAndCatches(runs,catches);
  	Player.setAvg();
  	Player.getDetails();
  	cout << "1.Retired \n2.continue to play \n ";
  	cout << "Enter Your Choice : " ;
  	int option;
  	cin >> option;
  	if(option == 1)
      break;  	
      a++;
  }
  
	
}
