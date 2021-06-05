#include <iostream>
//recursive bubble sort
void bubbleSort(std::string districts[],int arr[], int n)
{
    if (n == 1)
        return;
 
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
        {
        	std::swap(arr[i], arr[i+1]);
        	std::swap(districts[i], districts[i+1]);
		}
            
    bubbleSort(districts,arr, n-1);
}
int main()
{
	std::cout << "***************ELECTION POLLING ENDS IN TAMILNADU********************" <<std::endl;
	std::cout << "Enter the districts count : " ;
	int n;
	std::cin >> n;
	std::cout << "Enter the district names and voting counts : " << std::endl;
	int votes[n];
	std::string districts[n];
	for(int i=0;i<n;i++)
	{
		std::cin >> districts[i] >> votes[i] ;	
	}
	std::cout << "                                      ******************POLLING ENDS(MOST VOTING COUNTS)***********************" << std::endl;
	bubbleSort(districts,votes,n);
	int place = 1;
	for(int i=n-1;i>=0;i--)
	{
         std::cout << "                                         " << place << " . " << districts[i] << " - " << votes[i] << std::endl;
         place++;
	}
	
}
