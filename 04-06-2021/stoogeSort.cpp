#include <iostream>
#include <bits/stdc++.h>
void stoogeSort(std::string districts[],int arr[], int l, int h)
{
    if (l >= h)
        return;
    if (arr[l] > arr[h])
    {
    	int temp=arr[l];
    	arr[l]=arr[h];
    	arr[h]=temp;
    	std::string temp1=districts[l];
    	districts[l]=districts[h];
    	districts[h]=temp1;
	}
    if (h - l + 1 > 2) {
        int t = (h - l + 1) / 3;
        stoogeSort(districts,arr, l, h - t);
        stoogeSort(districts,arr, l + t, h);
        stoogeSort(districts,arr, l, h - t);
    }
}



int main()
{
	std::cout << "*************************CORONA POSITIVE CASES******************************" <<std::endl;
	std::cout << "How many district involved : " ;
	int n;
	std::cin >> n;
	std::string districts[n];
	int positive[n];
	for(int i=0;i<n;i++)
	{
		std::cin >> districts[i] >> positive[i] ;
	}
	stoogeSort(districts,positive,0,n-1);
	std::cout << "                                       ********POSITIVE CASES*************" << std::endl;
	int place = 1;
	for(int i=n-1;i>=0;i--)
	{
		std::cout << "                                           " << place << " . " << districts[i] << " - " << positive[i] << std::endl;
		place++;
	}
}
