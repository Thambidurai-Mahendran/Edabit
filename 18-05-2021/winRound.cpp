/*
You have a pack of 5 randomly numbered cards, which can range from 0-9. You can win if you can produce a higher two-digit number from your cards than your opponent. Return true if your cards win that round.

Worked Example
winRound([2, 5, 2, 6, 9], [3, 7, 3, 1, 2]) ? true
// Your cards can make the number 96
// Your opponent can make the number 73
// You win the round since 96 > 73
*/
using namespace std;
bool winRound(std::vector<int> you, std::vector<int> opp) {
	/*we sort the two integer vectors*/
	sort(you.begin(),you.end());
	sort(opp.begin(),opp.end());
	/*we use the last two numbers to make a big digit*/
	int myCard=you[you.size()-1]*10+you[you.size()-2];
	int oppCard=opp[opp.size()-1]*10+opp[opp.size()-2];
	/*my card is greater than opponents card we return true else we return false*/
	if(myCard>oppCard)
		return true;
	else return false;
}
