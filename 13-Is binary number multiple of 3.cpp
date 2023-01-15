 int odd=0;
	   int even=0
	   ;
	   for(int x=0;x<s.length();x++){
	       if(s[x]=='1'){
	           if(x%2==0)even++;
	           else odd++;
	       }
	   }
	   if(abs(odd-even)%3==0)return 1;
	   return 0;