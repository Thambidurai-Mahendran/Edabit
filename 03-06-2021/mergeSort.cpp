#include <iostream>
void merge(std::string names[],int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
	std::string L1[n1],R1[n2];
  
    for (int i = 0; i < n1; i++)
    {
    	L[i] = arr[l + i];
    	L1[i]=names[l + i];
	}
    for (int j = 0; j < n2; j++)
    {
    	R[j] = arr[m + 1 + j];
    	R1[j]=names[m + 1 +j];
	} 

    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] > R[j]) {
            arr[k] = L[i];
            names[k]=L1[i];
            i++;
        }
        else {
            arr[k] = R[j];
            names[k]=R1[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        names[k]=L1[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        names[k]=R1[j];
        j++;
        k++;
    }
}
 

void mergeSort(std::string names[],int arr[],int l,int r){
    if(l<r){
	
    int m =l+ (r-l)/2;
    mergeSort(names,arr,l,m);
    mergeSort(names,arr,m+1,r);
    merge(names,arr,l,m,r);
}
}
int main()
{
	std::cout << "*******JOB ALLOTMENT BASED ON EXPERIENCE ***********" <<std::endl;
	std::cout << "How many members applied for this job : " ;
	int n;
	std::cin >> n;
	std::cout << "Enter Names and Experience : ";
	std::string names[100];
	int experience[100];
	for(int i=0;i<n;i++)
	{
	    std::cin >> names[i] >> experience[i] ;
	}
	mergeSort(names,experience,0,n-1);
	std::cout << "                               ***************JOB ALLOTEMENT IN EXPERIENCE OREDER *****************" <<std::endl;
	for(int i=0;i<n;i++)
	{
		std:: cout << "                            " << i+1 << " . " << names[i] << "-" << experience[i] << std:: endl;
	}
}
