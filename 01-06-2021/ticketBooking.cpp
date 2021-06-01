#include <iostream>
#include <bits/stdc++.h>
#include <string >

static int a=0;
struct Bus
{
	int no;
	std::string busname;
	std::string drivername;
	std::string  from;
	std::string to;
	std::string arrival;
	std::string depart;
	int seats[21];
}s[10];



int main()
{
	std::cout << "Bus Seats checking and booking system " ;
	auto install=[]()
	{
	       std::cout << "\nEnter bus number : " ;
		   std::cin >> s[a].no;	
		   std::cout << "\nEnter bus name : " ;
		   std::cin >> s[a].busname;
		   std::cout << "\nEnter the driver name : ";
		   std::cin >> s[a].drivername;
		   std::cout << "\nenter the starting place : ";
		   std::cin >> s[a].from;
		   std::cout << "\nEnter the ending place : ";
		   std::cin >> s[a].to;
		    std::cout << "\n Enter the departure time : ";
		   std::cin >> s[a].depart;
		   std::cout << "\nEnter the arrival time : " ;
		   std::cin >> s[a].arrival;
		  
		   s[a].seats[20]={0};
		   a++;
		   
	};
	//use lambdas
	auto seatChecking=[](){
		  std::cout << " Enter the valid bus number : " ;
		  int number,temp;
		  std::cin >> number;
		  for(int i=0;i<=a;i++)
		  {
		  	  if(number==s[i].no)
		  	  temp=i;
		  }
		  std::cout << " The bus number : " << s[temp].no << "    The bus name : " << s[temp].busname << "       The bus driver Name : " << s[temp].drivername << std::endl;
	   	  std::cout << "starting place : " << s[temp].from << "  Ending place : " << s[temp].to << "     arrival time : " << s[temp].arrival << "    depart time : " << s[temp].depart << std::endl;
	      std::cout << " ***********************************************************************************" <<std::endl;
	      for(int i=0;i<=4;i++)
		  {
		  	  for(int j=1;j<21;j+=5)
			  {
			  	  if(s[temp].seats[j+i]==0)
				  {
				  	std::cout << j+i <<" : " << " Empty " ; 
				  }
				  else if(s[temp].seats[j+i]==1)
				  {
				  	std::cout << j+i<< " : " << " full " ;
				  }
				 
			  }
			   std::cout << "\n " ;
		  }
     };
     auto seatBooking=[](){
     	while(1)
		 {
		int number,seatno,temp;
     	std::cout << "\nEnter the bus number : ";
     	std::cin  >> number;
     	std::cout << "\nEnter the seat Number : ";
     	std::cin >> seatno;
     	  for(int i=0;i<=a;i++)
		  {
		  	  if(number==s[i].no)
		  	  {
		  	    temp=i;
		  	    break;
			  }
		  }
		  if(s[temp].seats[seatno]==0)
		  {
		  	s[temp].seats[seatno]=1;
		  	std::cout << "\nyour seat booked successfully !!!";
		  	break;
		  }
		  else 
		  {
		  	std::cout << "\n enter the valid bus number or seatnumber " ;
		  }
     }
	 };
	while(1)
	{
	     std::cout << "\n1.Install " ;
	     std::cout << "\n2.seat checking ";
	     std::cout << "\n3.seat Booking ";
	     int option;
	     std::cout << "\nEnter your option : ";
	     std::cin >> option;
	     switch(option)
		 {
		 	case 1:
		 		install();
		 		break;
		 	case 2:
			    seatChecking();
				break;	
			case 3:
			    seatBooking();
				break;	
				
		 }
	     
    }

}
