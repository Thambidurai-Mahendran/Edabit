/*
Given a letter, created a function which returns the nearest vowel to the letter. If two vowels are equidistant to the given letter, return the earlier vowel.

Examples
nearestVowel("b") ? "a"

nearestVowel("s") ? "u"

nearestVowel("c") ? "a"

nearestVowel("i") ? "i"
*/
char nearestVowel(char s) {
	char s1=s;
	char s2=s;
	/*below looping used to return the earlier vowel from the givel letter*/
	while(1)
	{
		if(s1=='a'||s1=='e'||s1=='i'||s1=='o'||s1=='u')
			return s1;
			if(s2=='a'||s2=='e'||s2=='i'||s2=='o'||s2=='u')
				return s2;
		s1--;
		s2++;
	}
}
