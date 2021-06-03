#include <iostream>
#include <bits/stdc++.h>
void countSort(int arr[],int n,std::string names[])
{
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i< n;i++)
	{
		if(max<arr[i])
		max=arr[i];
		if(min>arr[i])
		min=arr[i];
	}
    int range = max - min + 1;
    std::string output1[n];
    int count[range]={0}, output[n];
    for (int i = 0; i < n; i++)
        count[arr[i] - min]++;
 
    for (int i = 1; i <max-min+1; i++)
        count[i] += count[i - 1];
 
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        output1[count[arr[i] - min] - 1] = names[i];
        count[arr[i] - min]--;
    }
 
    for (int i = 0; i < n; i++)
    {
    	arr[i] = output[i];
    	names[i]=output1[i];
	}
}
int main()
{
	std::cout << " ********WE CREATE A LINE IN HEIGHT ORDER *********" <<std::endl;
	std::cout << "how many members in one line : " ;
	int n;
	std::cin >>n;
	std::cout << "Enter the names and heights " <<std::endl;
	std::string names[n];
	int heights[n];
	for(int i=0;i<n;i++)
	{
		std::cin >> names[i] >> heights[i];
	}
	countSort(heights,n,names);
	int place=1;
	std::cout << "                       **********************Created a line in height order*******************" << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cout << "                                   " <<place << "."<< names[i] << "-" << heights[i] << std::endl;
		place++;
	}
}
