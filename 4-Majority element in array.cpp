class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int t)
    {
        
        int maxi = 0;
    for (int i = 0; i < t; i++)
    {maxi=max(a[i], maxi);
    }
    int freq[maxi+1]={0};
    for(int i=0;i<t;i++){
        int sel=a[i];
        freq[sel]++;
    }
    int i=0;
    for( i=0;i<maxi+1;i++){
        if(freq[i]>t/2){
            return i;
        }
    }

return -1;
}
  
        
    
};