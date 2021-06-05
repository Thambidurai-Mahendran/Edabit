#include <iostream>

//recursive insertion sort

void insertionSortRecursive(std::string names[],float arr[], int n)
{
    if (n <= 1)
        return;
    insertionSortRecursive(names, arr, n-1 );
    int last = arr[n-1];
    std::string temp=names[n-1]; 
    int j = n-2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        names[j+1]=names[j];
        j--;
    }
    arr[j+1] = last;
    names[j+1]=temp;
}

int main()
{
	std::cout << "**********************LONG JUMP EVENT***************************" << std::endl;
	std::cout << "How many members participate in the event : " ;
	int n;
	std::cin >> n;
	std::cout << "Enter the names and jumping distance(in meters) : " << std::endl;
	std::string names[n];
	float distance[n];
    for(int i=0;i<n;i++)
	{
		std::cin >> names[i] >> distance [i] ;
	}	
	insertionSortRecursive(names,distance,n);
	std::cout << "                                                     ****************WINNERS LIST ***************" <<std::endl;
	int place = 1;
	for(int i=n-1;i>=0;i--)
	{
		std::cout << "                                                        " << place << " . " << names[i] << " - " << distance[i] << std::endl;
	    place++;
	}
}
