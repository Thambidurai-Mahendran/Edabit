#include <iostream>
#include <bits/stdc++.h>
int main()
{
	std::cout << "****************LONG JUMP EVENT WITH BEST RECORDS********************************" << std::endl;
	std::cout << "How many participants participate in the event : " ;
	int n;
	std::cin >> n;
	std::string names[n];
	float records[n][5];
	std::cout << "Enter the names and 5 event records : " << std::endl;
	//get input 
	for(int i=0;i<n;i++)
	{
		std::cin >> names[i] ;
		for(int j=0;j<5;j++)
		{
			std::cin >> records[i][j];
		}
	}
	//sort 2d array
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			for(int k=0;k<4;k++)
			{
				if(records[i][k]<records[i][k+1])
				{
					float temp=records[i][k];
					records[i][k]=records[i][k+1];
					records[i][k+1]=temp;
				}
			}
		}
	}
	int place = 1 ;
	std::cout << "                                ******************Players with best records in order *****************" << std::endl;
	std::cout << "                                                     1st     2nd     3rd     4th      5th " << std::endl;
	//print the name with best records 
	for(int i=0;i<n;i++) 
	{
		std::cout << "                                         "<<place << " . " << names[i] << " - " ;
		place++;
		for(int j=0;j<5;j++)
		{
			std::cout << records[i][j] << "     " ;
		}
		std::cout << std::endl;
	}

}
