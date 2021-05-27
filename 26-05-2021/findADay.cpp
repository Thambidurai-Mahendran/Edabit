#include <iostream>
using namespace std;

class codeOfYear
{   
  protected:
  	int yearCode;
   public:
	        //Find a year code
	        void findYearCode(int year)
		{
			if(year>=1600&&year<=1699)
			yearCode=6;
			else if(year>=1700&&year<=1799)
			yearCode=4;
			else if(year>=1800&&year<=1899)
			yearCode=2;
			else if(year>=1900&&year<=1999)
			yearCode=0;
			else if(year>=2000&&year<=2099)
			yearCode=6;
			
		}
};
class codeOfMonth
{     
     protected:
           int monthCode;
      public :  
	        //Find a month code
		void findMonthCode(string month)
		{
			if(month=="January")monthCode=0;
			if(month=="Febraury")monthCode=3;
			if(month=="March")monthCode=3;
			if(month=="April")monthCode=6;
			if(month=="May")monthCode=1;
			if(month=="June")monthCode=4;
			if(month=="July")monthCode=4;
			if(month=="August")monthCode=2;
			if(month=="September")monthCode=5;
			if(month=="October")monthCode=0;
			if(month=="November")monthCode=3;
			if(month=="December")monthCode=5;
			
		}
};
class findTwo{
	protected:
		int lastTwo,divide;
	public:
	        //find a last two digit of a year. 
	        void findLastTwo(int year)
		{
			lastTwo=year%100;
			divide=lastTwo/4;
		}
};
class findTheDate :public findTwo,public codeOfMonth,public codeOfYear
{   
    int sum,yearCode;
	public:
	        //find the total
		int findTheTotal(int day,int year)
		{   
		    
			sum=lastTwo+divide+day+monthCode+yearCode;
			if((year%4==0&&year%100!=0)||year%400==0)
			sum-=1;
			int ans=sum%7;
			return ans;
		}
};
int main()
{   
    
	int day;
	string month;
	int year;
	cout << "Enter The date : " ;
	cin  >> day;
	cout << "Enter The Month : " ;
	cin  >> month;
	cout << "Enter the year : " ;
	cin  >> year;
	findTheDate calendar;
	calendar.findLastTwo(year);
	calendar.findYearCode(year);
	calendar.findMonthCode(month);
	int result=calendar.findTheTotal(day,year);
	cout << " The day is : " ;
	switch(result)
	{
		
		case 0:
			cout << "Sunday ";
			break;
		case 1:
			cout << "Monday ";
			break;
		case 2:
			cout << "Tuesday ";
			break;
		case 3:
			cout << "Wednesday ";
			break;
		case 4:
			cout << "Thursday ";
			break;
		case 5:
			cout << "Friday";	
			break;	
		default:
		    cout<< "Saturday " ;
			break;	
				
			
	}
}
