#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,q;
       cin>>q;
       int a[n];
       for(int i=0;i<n;i++){
         cin>>a[i];  
       }
       int i;
       for( i=0;i<n;i++){
           if(a[i]==q){
               cout<<i<<endl;
               break;
           }
           
       }
       if(i==n){
           cout<<-1<<endl;
       }
       int j;
       for(j=n;j>0;j--){
           if(a[j]==q){
               cout<<j<<endl;
               break;
           }
            
       }
       if(j==n){
           cout<<-1<<endl;
       }
   }

    return 0;
}
