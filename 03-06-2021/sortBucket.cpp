#include <iostream>
#include <bits/stdc++.h>
#include <vector>
void bucketSort(float arr[], int n)
{
    std::vector<float> b[10];
    for (int i = 0; i < n; i++) {
        int bi =  arr[i];
        b[bi].push_back(arr[i]);
    }
 
 
    for (int i = 0; i < 10; i++)
        sort(b[i].begin(), b[i].end());
    int index = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}
int main()
{
	std::cout << "**************FIND UNIVERSITY RANK HOLDERS****************"<<std::endl;
	std::cout << "Enter students count : " ;
	int n;
	std::cin >> n;
	float cgpa[n];
	std::string names[n];
	std::cout << "Enter students names and cgpa(upto 10) : " <<std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >>names[i] >> cgpa[i] ; 
	}
   for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(cgpa[j]>cgpa[j+1])
			{  
			    int temp1=cgpa[j];
			    cgpa[j]=cgpa[j+1];
			    cgpa[j+1]=temp1;
				std::string temp=names[j];
				names[j]=names[j+1];
				names[j+1]=temp;
			}
		}
	}
	bucketSort(cgpa,n);
	std::cout << "                           *******RANK HOLDERS ********" << std::endl;
	int rank=1;
	for(int i=n-1;i>=0;i--)
	{   
		std::cout<<"                      " << rank << " . "<< names[i] << "-" << cgpa[i] << std::endl;
		rank++;
	}
}
