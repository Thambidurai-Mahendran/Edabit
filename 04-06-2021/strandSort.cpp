#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void strandSort(list<int> &ip, list<int> &op)
{
    
    if (ip.empty())
        return;
  
    
    list<int> sublist;
    sublist.push_back(ip.front());
    ip.pop_front();
       

    for (auto it = ip.begin(); it != ip.end(); ) {
        if (*it > sublist.back()) {
            sublist.push_back(*it);
            
            it = ip.erase(it);
        }
  
        else
            it++;
    }
    op.merge(sublist);
    strandSort(ip, op);
}


int main()
{
	std::cout << "                ************HIGHEST WICKET TAKERS************" <<std::endl;
    std::cout << "How many bowlers in the list : " ;
    int n;
    std::cin >> n;
    list<int>wickets;
	int wickets1[n];
    std::string names[n];
    std::cout << "Enter the names and wickets : " <<  std::endl;
    for(int i=0;i<n;i++)
	{   
	    int temp;
		std::cin >> names[i] >>temp;
		int temp1=temp;
		wickets.push_back(temp);
		wickets1[i]=temp1;
	}
	list<int>temp;
	strandSort(wickets,temp);
	std::cout << "                             ***** Leading wicket Takers ***** " << std::endl;
	reverse(temp.begin(),temp.end());
	for(auto it=temp.begin();it!=temp.end(); it++)
	{   
	    for(int i=0;i<n;i++)
	    if(*it==wickets1[i])
		std::cout << "                                 " << names[i] << " - " << *it << std::endl;
	}
}
