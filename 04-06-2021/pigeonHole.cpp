#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void pigeonholeSort(std::string names[],int arr[], int n)
{
   
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    int range = max - min + 1; 
    vector<int> holes[range];
    vector<std::string>holes1[range];
    for (int i = 0; i < n; i++)
    {
    	holes[arr[i]-min].push_back(arr[i]);
        holes1[arr[i]-min].push_back(names[i]);
	}
    int index = 0;  
    for (int i = 0; i < range; i++)
    {  
       int cur=0;
       for (auto it = holes[i].begin(); it != holes[i].end(); ++it)
    {
    	arr[index]  = *it;
    	names[index]=holes1[i][cur++];
    	index++;
	}
    }
}


int main()
{
	std::cout << "***********************STUDENTS GET THE SEAT CUT OFF WISE**************************" << std::endl;
	std::cout  << "How many students in the list  : " ;
	int  n;
	std::cin  >> n;
	std::string names[n];
	int cutOff[n];
	std::cout << "Enter the students names and cutoff marks : " << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >> names[i]  >> cutOff[i] ; 
	}
	pigeonholeSort(names,cutOff, n);
	int place =1;
	std::cout << "                                       *******ARRANGED CUT OFF WISE****" << std::endl;
	for(int i=n-1;i>=0;i--)
	{
		std::cout <<  "                                     "<< place << " . " << names[i] << " - "<<cutOff[i] << std::endl;
		place++;
	}
}
