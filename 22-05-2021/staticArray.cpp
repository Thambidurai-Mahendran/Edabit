/**********************************STATIC ARRAY DECLARATION *******************************************/

/***************************SUM OF THE ALL ARRAY ELEMENTS*********************************************/

#include <iostream>
#include <array>

int main()
{
	std::array<int ,5> data;
	for(int i=0;i<data.size();i++)
	{
		std::cin >> data[i] ;	
	}
	int sum=0;
	//below looping used to sum of the all elements 
	for(int i=0;i<data.size();i++)
	{
		sum+=data[i];
	}
    std::cout << sum ;
}
