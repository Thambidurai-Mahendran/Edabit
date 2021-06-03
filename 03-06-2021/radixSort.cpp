#include <iostream>
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
 


void countSort(std::string names[],int arr[], int n, int exp)
{
    int output[n]; 
    int i, count[10] = { 0 };
    std::string output1[n];
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        output1[count[(arr[i] / exp) % 10] - 1] = names[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
    {
    	arr[i] = output[i];
    	names[i]=output1[i];
	}
}

void radixsort(std::string names[],int arr[], int n)
{
    int m = getMax(arr, n);
 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(names,arr, n, exp);
}
 
int main()
{
	std::cout << "*********************BILLIONAIRES LIST**********************  " <<std::endl;
	std::cout << "How many billionaires in the list : " ;
	int n;
	std::cin>> n;
	int income[n];
	std::string names[n];
	std::cout << "Enter the billionaires names and incomes : " << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >>names[i]>>income[i] ; 
	}
	radixsort(names,income,n);
	int num=1;
	std::cout << "                           ************Billionaires list************" << std::endl;
	for(int i=n-1;i>=0;i--)
	{
		std::cout << "                                "<<num << "."<< names[i] << " " << income[i] << std::endl;
		num++;
	}
}
