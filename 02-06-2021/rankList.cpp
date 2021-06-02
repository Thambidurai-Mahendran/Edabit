//using Bubble sort 

#include <iostream>
#include<bits/stdc++.h>
#include <string>

static int a=0;

struct students
{
	int total;
	std::string name;
}s[20];
class student
{   
    int tamil,english,maths,science,social,temp;
	std::string Name;
	public:
		void getDetails()
		{
			std::cout << "Enter student Name : " ;
			std::cin  >> s[a].name;
			std::cout << "Enter the student marks " << std::endl;
			std::cout << "Tamil : " ;
			std::cin >> tamil;
			std::cout << "English : " ;
			std::cin >>english;
			std::cout << "Maths : " ;
			std::cin >> maths;
			std::cout << "Scinece : " ;
			std::cin >> science;
			std::cout << "Social : " ;
			std::cin >> social;
			s[a].total=tamil+english+maths+science+social;
			a++;
		}
		void Ranklist()
		{   
		     int rank=1;
		    std::cout << "\n\n" << std::endl;
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<a-1;j++)
				{
					if(s[j].total>s[j+1].total)
					{
						temp=s[j].total;
						s[j].total=s[j+1].total;
						s[j+1].total=temp;
						Name=s[j].name;
						s[j].name=s[j+1].name;
						s[j+1].name=Name;
						
					}
				}
				std::cout<< "Rank " << rank <<" . " << s[a-i-1].name<< " " <<s[a-i-1].total << "/500"<<std::endl;
			    rank++;
			
			
			}
		std::cout << "\n\n" << std::endl;
		}
};

int main()
{
   std::cout << "*****************RANK LIST ********************" << std::endl ;
   student get;
   while(1)
   {
   	   std::cout << "1.Enter student marks details   " << std::endl;
   	   std::cout << "2. Get rank list  " <<std::endl;
   	   std::cout << "3.Enter your choice( 1 or 2 ) : " ;
   	   int option;
   	   std::cin  >> option;
   	   switch(option)
	   {
		  	case 1:
		  		get.getDetails();
		  		break;
		  	case 2:
			    get.Ranklist();
				break;	
		  		
	   } 
   }
}
