/*
Given a number n, return a sentence which describes the number in the following ways.

Always start the string with "The most ".
If n is evenly divisible by 1, add "brilliant " to the sentence.
If n is evenly divisble by 2, add "exciting " to the sentence.
... 3, add "fantastic " to the sentence.
... 4, add "virtuous " to the sentence.
... 5, add "heart-warming " ...
... 6, add "tear-jerking " ...
... 7, add "beautiful " ...
... 8, add "exhilarating " ...
... 9, add "emotional " ...
If n is evenly divisible by 10, add "inspiring " to the sentence.
Always end the string with "number is n!".
Examples
describeNum(13) ? "The most brilliant number is 13!"
// 13 is evenly divisble by 1 only

describeNum(4) ? "The most brilliant exciting virtuous number is 4!"
// 4 is evenly divisible by 1, 2 and 4

describeNum(21) ? "The most brilliant fantastic beautiful number is 21!"
// 21 is evenly divisible by 1, 3 and 7

*/
using namespace std;
std::string describeNum(int n) {
	string ans= "The most ";
	if(n % 1 == 0) {
		ans+= "brilliant ";
	}
	if(n % 2 == 0) {
		ans+= "exciting ";
	}
	if(n % 3 == 0) {
		ans+= "fantastic ";
	}
	if(n % 4 == 0) {
		ans += "virtuous ";
	}
	if(n % 5 == 0) {
		ans+= "heart-warming ";
	}
	if(n % 6 == 0) {
		ans+= "tear-jerking ";
	}
	if(n % 7 == 0) {
		ans+= "beautiful ";
	}
	if(n % 8 == 0) {
		 ans+= "exhilarating ";
	}
	if(n % 9 == 0) {
		ans+= "emotional ";
	}
	if(n % 10 == 0) {
		ans+= "inspiring ";
	}
	return ans + "number is " + to_string(n) + "!";
}
