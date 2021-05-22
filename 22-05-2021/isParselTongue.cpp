/*
Hermione has come up with a precise formula for determining whether or not a phrase was ssspoken by a parssseltongue (a reference from the Harry Potter universe; the language of ssserpents and those who can converse with them).

Each word in a sssentence must contain either:

Two or more consecutive instances of the letter "s" (i.e. must be together ss..), or...
Zero instances of the letter "s" by itself.
Examples
isParselTongue("Sshe ssselectss to eat that apple. ") ? true

isParselTongue("She ssselects to eat that apple. ") ? false
// "She" only contains one "s".

isParselTongue("Beatrice samples lemonade") ? false
// While "samples" has 2 instances of "s", they are not together.

isParselTongue("You ssseldom sssspeak sso boldly, ssso messmerizingly.") ? true
*/
bool isParselTongue(std::string s) {
	//we check the instance of s ,if the sentence contain consectively only one s we return false either we return true 
	for(int i=0;i<s.size();i++)
	{ 
		if(s[i]=='s'||s[i]=='S')
		{
       if(s[i+1]=='s'||s[i-1]=='s'||s[i-1]=='S')
			 {
				 
			 }
			else return false;
				
		}
		
	}
	return true;
}
