#include <iostream>
//gnomesort using sorting
void gnomeSort(std::string states[],int arr[], int n)
{
    int index = 0;
 
    while (index < n) 
	{
        if (index == 0)
            index++;
        if (arr[index] <= arr[index - 1])
            index++;
        else {
            std::swap(arr[index], arr[index - 1]);
            std::swap(states[index],states[index-1]);
            index--;
        }
    }
    return;
}

int main()
{
	std::cout << "*****************************POPULATION********************************" << std::endl;
	std::cout << "Enter the states count : " ;
	int n;
	std::cin >> n;
	std::cout << "Enter the state Names and its population count : " << std::endl;
	std::string states[n];
	int population[n];
	for(int i=0;i<n;i++)
	{
		std::cin >> states[i] >> population[i] ;
	}
	gnomeSort(states,population, n);
	std::cout << "                                           *******MOST POPULATION STATES************" << std::endl;
	int place=1;
	for(int i=0;i<n;i++)
	{
		std::cout << "                                                " << place << states[i] << " - " << population[i] << std::endl;
		place++;
	}
}
