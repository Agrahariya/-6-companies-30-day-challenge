#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int m=0;
	    for(int i=0;i<str.length()-1;i++){
	     int a=i,b=i+1;
	     int s=0,d=0;
	     while(a>=0&&b<str.length()){
	         s+=str[a]-'0';
	         d+=str[b]-'0';if(s==d){
	             m=max(m,b-a+1);
	         }
	         a--;
	         b++;
	     }
	    }
	    cout<<m<<endl;
	}
	
	return 0;
}