#include <iostream>
void cocktailSort(std::string names[],int year[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-2;j>=0;j--)
		{
			if(year[j]>year[j+1])
			{
				int temp=year[j];
				year[j]=year[j+1];
				year[j+1]=temp;
				std::string temp1=names[j];
				names[j]=names[j+1];
				names[j+1]=temp1;
			}
		}
	}
}
int main()
{
	std::cout<< " ******************ARRANGED THE NAMES AGE WISE *********************************" <<std::endl;
	std::cout << "How many members in the list : " ;
	int n;
	std::cin >> n;
	std::string names[n];
	int birthYear[n];
	std::cout << "Enter the names and birth year  " << std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin >> names[i] >> birthYear[i] ;
	} 
	cocktailSort(names,birthYear,n);
	int place=1;
	std::cout << "                             ************************After arranging *********************"<<std::endl;
	for(int i=0;i<n;i++)
	{
		std:: cout << "                          " <<place << " . " <<names[i] << " - " << birthYear[i] << std::endl;
		place++;
	}
}
