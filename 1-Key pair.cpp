class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr, arr+n);
   int i,j,ub=n;
  for( i=0;i<ub;i++){
        for( j=i+1;j<n;j++){
            if(arr[j]>x)
         {
            ub=j;
            break;
         }
            if(arr[i]+arr[j]==x){
            return true;
            }
        }
        // if(j<n)
        //  break;
    }
     if(i==ub)
     return false;
	}