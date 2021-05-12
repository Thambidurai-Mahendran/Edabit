std::string mysteryFunc(std::string s) {
	   std::string Ans;
	   int cur=0;
	   for(int i=0;i<s.size();i+=2)
		 { int limit=s[i+1]+'0';
			 for(int j=0;j<limit;j++)
			 {
				 Ans[cur++]=s[i];
			 }
		 }Ans[cur]='\0';
	return Ans;
}
