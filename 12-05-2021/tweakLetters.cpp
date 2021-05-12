std::string tweakLetters(std::string s, std::vector<int> arr) {
 for(int i=0;i<s.size();i++)
 {
    if(s[i]+arr[i]>122)
    {
       s[i]='a';
    }
    else if(s[i]+arr[i]<97)
    {
	s[i]='z';
    }
   else s[i]=s[i]+arr[i];
 }
return s;
}
