//selectionsort

#include <iostream>

int main()
{
	std::cout << "*****************Create Roll No***************" << std::endl;
	std::string names[100],rollnums[100];
	int n,i=0;
	std::cout << "How Many students in the class : " ;
	std::cin >> n;
	std::cout << "Enter student Names : " << std::endl;
	while(n--)
	{
		std::cin>> names[i++];
	}
	for(int j=0;j<i;j++)
	{   
	    int min_idx=j;
		for(int k=j+1;k<i;k++)
		{
			if(names[min_idx]>names[k])
			{
				min_idx=k;
			}
		}
		std::string temp=names[min_idx];
		names[min_idx]=names[j];
		names[j]=temp;
	}
	int rollno=1814001;
	for(int j=0;j<i;j++)
	{
		std::cout<< rollno<< "--" << names[j] << std::endl;
		rollnums[j]=rollno;
		rollno++;
	}
}
