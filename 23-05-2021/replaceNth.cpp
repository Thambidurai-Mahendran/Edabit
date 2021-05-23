/*
Create a function that takes a string and replaces every nth instance of oldChar with newChar. Your function will have four parameters:

str — The original input text to be processed.
nth — The nth instance to be replaced.
oldChar — The character being replaced.
newChar — The character replacing oldChar.
In other words, if str is "abababa", nth is 3, oldChar is "a" and newChar is "Z", you would replace the 3rd insrtance of "a" with "Z", returning "ababZba".

Examples
replaceNth("A glittering gem is not enough.", 0, "o", "-")
? "A glittering gem is not enough."

replaceNth("Vader said: No, I am your father!", 2, "a", "o")
? "Vader soid: No, I am your fother!"

replaceNth("Writing a list of random sentences is harder than I initially thought it would be.", 2, "i", "3")
? "Writ3ng a list of random sentences 3s harder than I in3tially thought 3t would be.
*/
#include<string>
using namespace std;
std::string replaceNth(std::string str, int nth, std::string oldChar, std::string newChar) {
	  int count=0;
	  for(size_t i=0;i<str.size();i++){
	         //we count the instance of  a characater 
                 if(str[i]==oldChar[0])
		 {
                      count++;
                      //If the instance of a character is equal to nth value ,the old character being replaced by the new character.
                      if(count==nth)
		      {
                          str[i]=newChar[0];
                          count=0;
                      }
                  }
	  }	  
        return str;
}
