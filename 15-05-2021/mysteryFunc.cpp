/*
Examples
"hello" ? [4, 1, 3, 3, 1]

"maybe" ? [4, 2, 1, 3, 1]

"hopeless" ? [0, 7, 0, 5, 4, 5, 3, 3]

"higher" ? [2, 3, 1, 2, 5, 0]

"movement" ? [5, 7, 6, 5, 5, 5, 6, 4]
*/
using namespace std; 
std::vector<int> mysteryFunc(std::string str) {
	  vector<int> ans;
	/*below looping used to find the reminder when the Ascii values of the charater divided by string size*/  
    for(int i=0; i<str.size(); i++){
        ans.push_back((int)str[i]%str.size());
    }
    return ans;
}
