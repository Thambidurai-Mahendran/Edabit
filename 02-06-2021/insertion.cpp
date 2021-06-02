//using insertion sort
#include <iostream>

int main()
{
	std::cout << " *****************************Display The winners and runners list in order *********************************" << std::endl ;
	std::cout << "How many members participate in the running race : " ;
	int n;
	std::cin >> n;
	std::string names[n];
	float timings[n];
    for(int i=0;i<n;i++)
	{
		std::cin >> names[i] >> timings[i] ;
	}
	for(int i=1;i<n;i++)
	{
		float ans=timings[i];
		std::string temp=names[i];
		int j=i-1;
		while(j>=0&&timings[j]>ans)
		{
			timings[j+1]=timings[j];
			names[j+1]=names[j];
			j--;
		}
		timings[j+1]=ans;
		names[j+1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		std::cout<< i+1 << " place "<< names[i] << "-" << timings[i]<<std::endl;
	}
}
