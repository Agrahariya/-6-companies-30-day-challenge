#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   int total=((t)*(t+1))/2;
    int a[t-1];
for(int i=0;i<t-1;i++){
    cin>>a[i];
     total=total-a[i];
}
 cout<<total<<endl;
    return 0;
}
