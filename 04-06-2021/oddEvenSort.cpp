#include <iostream>

void oddEvenSort(std::string districts[],int arr[], int n)
{
    bool isSorted = false;
 
    while (!isSorted)
    {
        isSorted = true;
 
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                std::swap(arr[i], arr[i+1]);
                std::swap(districts[i],districts[i+1]);
                isSorted = false;
              }
        }
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                std::swap(arr[i], arr[i+1]);
                std::swap(districts[i],districts[i+1]);
                isSorted = false;
            }
        }
    }
 
    return;
}


int main()
{
	std::cout << "*************************CORONA DEATH CASES******************************" <<std::endl;
	std::cout << "How many district involved : " ;
	int n;
	std::cin >> n;
	std::string districts[n];
	int death[n];
	std::cout << " Enter district names and death cases : " << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >> districts[i] >> death[i] ;
	}
	oddEvenSort(districts,death,n);
	std::cout << "                                       ********DEATH CASES*************" << std::endl;
	int place = 1;
	for(int i=n-1;i>=0;i--)
	{
		std::cout << "                                           " << place << " . " << districts[i] << " - " << death[i] << std::endl;
		place++;
	}
}
