#include <iostream>
//#include <unistd.h>
//#include <windows.h>
using namespace std;
static int milliseconds=0;
class clock
{
	     int hours,minutes,seconds;
        public:
		clock(int hours,int minutes ,int seconds)
		{ 
      //using this keyword to store the values in the class local variables
			this->hours=hours;
			this->minutes=minutes;
			this->seconds=seconds;
		}
		void operator++()
		{
			milliseconds++;
		}
		void getTime()
		{
			cout <<hours<<" : "<<minutes<<" : "<<seconds ;
		}
		void increaseTimes()
		{
			if(hours < 12&&minutes == 60 )
		    {
		    	hours++;
			    minutes=0;
			    seconds=0;
		    }
		    else if(minutes<60&&seconds==60)
		    {
			   minutes++;
			   seconds=0;
		    }
		    else if(milliseconds==60)
		   {
			  seconds++;
			  milliseconds=0;
		   }
		}
};
int main() 
{    
    int hours,minutes,seconds;
    cout << "Enter The Hours : " ;
    cin >> hours ;
    cout << "Enter the Minutes : " ;
    cin >> minutes;
    cout << "Enter The Seconds : " ;
    cin >> seconds ;
    clock time(hours,minutes,seconds);
    while(1)
	{       
	     time.getTime();
		   system("cls");
		   ++time;//opreator overloading 
		   time.increaseTimes();
       }
	}

