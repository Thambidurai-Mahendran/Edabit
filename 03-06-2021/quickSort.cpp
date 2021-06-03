//using quick sort 

#include <iostream>


void quicksort(std::string teams[],int number[],int first,int last){
   int i, j, pivot, temp;
   std::string temp1;
   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
            temp1=teams[i];
            teams[i]=teams[j];
            teams[j]=temp1;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      temp1=teams[pivot];
      teams[pivot]=teams[j];
      teams[j]=temp1;
      quicksort(teams,number,first,j-1);
      quicksort(teams,number,j+1,last);

   }
}



int main()
{
	std::cout << "**************Create points table ***************" << std::endl;
	std::cout << "How Many teams Playing the tournament : " ;
	int n,win,lose,draw;
	std::cin >> n;
	std::string teams[10];
	int points[10];
	std::cout << "*****Enter the team names and wining and losing matches *****" << std::endl ;
	for(int i=0;i<n;i++)
	{
		std::cout << "Enter the team Name : " ;
		std::cin  >> teams[i];
		std::cout << "Winning matches count : " ;
		std::cin  >> win;
		std::cout << "losing matches count : " ;
		std::cin  >> lose;
		std::cout << "draw matches count : " ;
		std::cin  >> draw;
		points[i]=(2*win)+(1*draw)-(2*lose);
	}
	quicksort(teams,points,0,n-1);
	int place=1; 
	std::cout << "           *****************Points Table*********************"<<std::endl;
	for(int i=n-1;i>=0;i--)
	{   
	    std::cout << "          Place                  teams                points "  << std::endl;
		std::cout<< "          "<<  place << "                        "<< teams[i] << "                    "<< points[i] << std::endl;
		place++;
	}
	
}
