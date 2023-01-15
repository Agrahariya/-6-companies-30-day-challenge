#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &a, int n){
   int t=a.size();
    for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
            if(a[i]+a[j]==n)
            { cout<<a[i]<<a[j]<<endl;
             
            }
        }
    }
}