using namespace std;
bool consecutiveCombo(vector<int> a1, vector<int> a2) {
	  /*First we merge the two arrays*/
	  for(int i=0;i<a2.size();i++)
	  {
		a1.push_back(a2[i]);
	  }
	  /*we use the sort function to sort the elements in array a1*/	
	  sort(a1.begin(),a1.end());
	  for(int i=0;i<a1.size()-1;i++)
	  {   
	       /* This if statement is used to find the correct sequence for consecutive combinations*/
	       if(a1[i+1]-a1[i]!=1)
	       {
		  return false;
	       }
	 }
	 return true;
}
