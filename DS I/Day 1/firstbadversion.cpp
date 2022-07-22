class Solution {
public:
    int firstBadVersion(int n) 
    {
       long int low=1 , high = n , mid;
         long int ans=n;
        while(low<=high)
             {
            mid=(low+high)/2;
            if(isBadVersion(mid))
            {
             ans=mid;
              high=mid-1;
            }
            else 
                low=mid+1;
            
            
            
              }

  return ans;
    }    
};
