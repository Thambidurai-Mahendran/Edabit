using namespace std;
std::string mysteryFunc(int n) {
	 /*First we convert integer(n) to string because its very useful to iterate index by index */ 
	 string mystryFun=to_string(n);
	 /*Create a mystryChallenge string*/ 
	 string mystryChallenge;
	 for(int i=0;i<mystryFun.size();)
	 {   
	     /*we store the character in c variable*/
	     char c=mystryFun[i];
	     int count=0;
	     /*This dowhile loop used to calculate the count of continuous characters in a string*/
	     do
	     {
	        i++;
	        count++;
	     }while(mystryFun[i]==c);
	     /* When we add a integer variable 'count' with the character "0",count is converted from integer to character.then we store the count in the mystrChallenge string*/
	     mystryChallenge+=(char)count+'0';
	     /*we store the c variable in mystryChallenge string*/
	     mystryChallenge+=c;
	 }
	/*Finally we return the mystryChallenge String */ 
   	return mystryChallenge;
}
