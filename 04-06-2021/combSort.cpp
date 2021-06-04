#include <iostream>
int getNextGap(int gap)
{
    gap = (gap*10)/13;
 
    if (gap < 1)
        return 1;
    return gap;
}
 
void combSort(std::string a[], int n)
{
  
    int gap = n;
 
    bool swapped = true;
 
    while (gap != 1 || swapped == true)
    {
        
        gap = getNextGap(gap);
 
        swapped = false;
        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
}
int main()
{
	std::cout << "***************NAMES SORT IN ALPHABETICAL ORDER************************" << std::endl;
	std::cout << "How many students names you entered : " ;
	int n;
	std::cin >> n;
	std::string names[n];
	std::cout << "Enter the student names :  " << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >> names[i];
	}
	combSort( names, n);
	std::cout << "                                ****************ATTENDANCE ORDER********************" << std::endl;
	int no=1;
	for(int i=0;i<n;i++)
	{
		std::cout << "                                     " <<no << " . " <<names[i] << std::endl;
		no++;
	}
}
