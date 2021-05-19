/*
Create a function that takes two inputs: idx (an array of integers) and str (a string). The function should return another string with the letters of str at each index in idx in order.

Examples
indexFilter([2, 3, 8, 11], "Autumn in New York") ? "tune"

indexFilter([0, 1, 5, 7, 4, 2], "Cry me a river") ? "creamy"

indexFilter([9, -9, 2, 27, 36, 6, 5, 13, -1, 2, 0, 30, 2], 
  "That's life, I've got you under my skin") ? "frank sinatra"
*/
using namespace std;
std::string indexFilter(std::vector<int> idx, std::string str){
  string indexFiltering;
  for(int i=0;i<idx.size();i++)
	{   
	    /*if the integer array element is negative then , we add the number with size of the string to get the index value */
	    if(idx[i]<0)
	       indexFiltering.push_back(tolower(str[str.size()+idx[i]]));
	    else 
		indexFiltering.push_back(tolower(str[idx[i]]));
  }
  return indexFiltering;
}
