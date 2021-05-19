/*
Create a function that returns the majority vote in an array. A majority vote is an element that occurs > N/2 times in an array (where N is the length of the array).

Examples
majorityVote(["A", "A", "B"]) ? "A"

majorityVote(["A", "A", "A", "B", "C", "A"]) ? "A"

majorityVote(["A", "B", "B", "A", "C", "C"]) ? "None"
*/
using namespace std;
std::string majorityVote(std::vector<std::string> arr) {
	for(int i=0;i<arr.size();i++)
	{
		int count=0;
		/*If the characters count greater than arr size we return the character else we return none..*/
		for(int j=0;j<arr.size();j++){
			if(arr[i]==arr[j])
				count++;
		if(count>arr.size()/2)
			return arr[i];
		}
	}
	return "None";
}
