/*
Given the tower height n, return the number of cards needed to construct a full house of cards.

Examples
cardsNeeded(3) ? 15

cardsNeeded(4) ? 26

cardsNeeded(0) ? 0
*/
int cardsNeeded(int n) {
	/*if the given n is less than zero we return -1*/
	if(n<0)
		return -1;
	/*if the given n is equal to zero ,we return 0*/	
	if(n==0)
		return 0;
	/*below looping used to find the cards count */	
	int cardsCount=2,increase=5;
	for(int i=1;i<n;i++)
	{
		cardsCount+=increase;
		increase+=3;
	}
	return cardsCount;
}
