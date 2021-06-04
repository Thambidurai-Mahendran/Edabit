#include <iostream>
void flip(std::string names[],float arr[], int i)
{
    int temp, start = 0;
    while (start < i)
    {
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        std::string temp1 = names[start];
        names[start] = names[i];
        names[i] = temp1;
        start++;
        i--;
    }
}
int findMax(float arr[], int n)
{
int mi, i;
for (mi = 0, i = 0; i < n; ++i)
    if (arr[i] > arr[mi])
            mi = i;
return mi;
}
void pancakeSort(std::string names[],float arr[], int n)
{
    for (int curr_size = n; curr_size > 1;
                               --curr_size)
    {
        int mi = findMax(arr, curr_size);
 
        if (mi != curr_size-1)
        {
            
            flip(names,arr, mi);
            flip(names,arr, curr_size-1);
        }
    }
}
int main()
{
	std::cout << "************************ARRANGED BUS NAMES AND ITS TIMES*******************************" << std::endl;
	std::cout << "Enter total bus count : " ;
	int n;
	std::cin >> n;
	std::string busNames[n];
	float times[n],times1[n],temp;
	std::cout << "Enter bus names and their timings(1am to 12am) : " << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >> busNames[i] >> times[i] ;
	
	
	}
	std::cout << "                             *******************Bus names and timings in ascending order ***********" << std::endl;
	pancakeSort(busNames,times,n);
	
	for(int i=0;i<n;i++)
	{   
	    
			std::cout << "                                        "<< busNames[i] << " - " << times[i] << std::endl; 
    }
}
