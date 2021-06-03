#include <iostream>

int shellSort(int year[],float arr[], int n)
{
    
    for (int gap = n/2; gap > 0; gap /= 2)
    {
       
        for (int i = gap; i < n; i += 1)
        {
        
            int temp = arr[i];
            int temp1=year[i];
            int j;           
            for (j = i; j >= gap && arr[j - gap]<temp; j -= gap)
            {
            	 arr[j] = arr[j - gap];
            	 year[j]=year[j-gap];
			}
       
            arr[j] = temp;
            year[j]=temp1;
        }
    }
    return 0;
}


int main()
{
	std::cout << "***********BEST PASSING PERCENTAGE IN A YEAR***************" << std::endl;
	std::cout << "Enter the total years count : "  ;
	int n;
	std::cin >> n;
	std::cout << "Enter the year and students pass percentage : " ;
	int year[100];
	float percentage[100];
	for(int i=0;i<n;i++)
	{
		std::cin >> year[i] >> percentage[i];
	}
	shellSort(year,percentage,n);
	std::cout << "         ************BEST AVERAGES **************" <<std::endl;
	for(int i=0;i<n;i++)
	{
		std::cout <<  "                   " <<year[i] << " "<< percentage[i] << "%."  << std::endl;
	}
}
