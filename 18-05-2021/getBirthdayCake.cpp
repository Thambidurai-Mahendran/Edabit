/*
Create a function which constructs a rectangular birthday cake, based on someone's name and age! Build it out of strings in an array and makes sure to surround the birthday message with the character that fits the rule:

If the age is an even number, surround the message with "#".
If the age is an odd number, surround the message with "*".
Other important rules:

The message should be in the format: {age} Happy Birthday {name}! {age}
Leave a space between the edge of the cake and the age numbers.
Examples
getBirthdayCake("Jack", 10) ? [
  "##############################",
  "# 10 Happy Birthday Jack! 10 #",
  "##############################"
]

getBirthdayCake("Russell", 19) ? [
  "*********************************",
  "* 19 Happy Birthday Russell! 19 *",
  "*********************************"
]

getBirthdayCake("Isabelle", 2) ? [
  "################################",
  "# 2 Happy Birthday Isabelle! 2 #",
  "################################"
]
*/
#include<string>
using namespace std;
std::vector<std::string> getBirthdayCake(std::string name, int age) {
	string ch;
	vector<string>result;
	/*If the age is an even number, surround the message with "#".
If the age is an odd number, surround the message with "*".*/
	if(age % 2 == 0)
	{
		 ch="#";
	} else 
	{
		ch="*";
	}
	
	result[1]+=ch+" "+to_string(age)+" Happy Birthday "+name+"! "+to_string(age)+" "+ ch;
		
	for(int i = 0; i<result[1].size(); i++)
		result[0]+= ch;
	for(int i = 0; i<result[1].size(); i++)
		result[2]+= ch;
	
	return result;
}
