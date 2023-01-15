#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxe=0L, sum=0L;
    for(int i=0;i<n;i++){
        if(sum<0){
            sum=0;
        }
        
            sum+=arr[x]+0L;
            maxe=max(maxe, sum);
        
    }
    return maxi;
}