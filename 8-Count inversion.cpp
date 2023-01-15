#include <bits/stdc++.h> 
long long getInversions(long long *a, int t){
    int c=0;
    for(int i=0;i<t-1;i++){
       for(int j=i+1;j<t;j++){
       if(a[i]>a[j]){
           c++;
       }
   }
   }
  return c;
}