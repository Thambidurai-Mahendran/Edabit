#include <iostream>
//use heapsort
void heapify(std::string names[],int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] < arr[largest])
        largest = l;
    if (r < n && arr[r] < arr[largest])
        largest = r;
 
   
    if (largest != i) {
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        std::string temp1=names[largest];
        names[largest]=names[i];
        names[i]=temp1;
        heapify(names,arr, n, largest);
    }
}
 

void heapSort(std::string names[],int arr[], int n)
{
     for (int i = n / 2 - 1; i >= 0; i--)
        heapify(names,arr, n, i);
    for (int i = n - 1; i > 0; i--)
	 {
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        std::string temp1=names[0];
        names[0]=names[i];
        names[i]=temp1;
        heapify(names,arr, i, 0);
    }
}
int main()
{
	std::cout << "*****************TOP RUN GETTERS IN ONE SEASON************************"<<std::endl;
	std::cout << "How many  batsman playing in the season : " ;
	int n;
	std::cin >> n;
	std::cout << "Enter the batsman names and scores : " ;
	std::string names[100];
	int runs[100];
	for(int i=0;i<n;i++)
	{
		std::cin >> names[i] >> runs[i] ;
	}
	heapSort(names,runs,n);
	std::cout << "                        ***********TOP RUN GETTERS **************" << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cout <<"                     "<< names[i]   << "        "<<runs[i] << std::endl;
	}
	
	
}
