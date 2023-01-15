# include<bits/stdc++.h>
 long long nthTermOfGP( int N, int A, int R) {
    
   long long pro=1;
   for(int i=1;i<N;i++ ){
       pro=(pro*R)%1e9+7;
   }
     return ((A*pro)%1e9+7);
     }