// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=0;
        long long left=1,right=n-1,mid=(left+right)/2;        
        if(isBadVersion(n) && !isBadVersion(n-1))
            return n;           
        for(i=0;i<=log2(n);i++)
        {
            if(isBadVersion(mid) && isBadVersion(mid-1))
                right=mid;
            else if(isBadVersion(mid) && !isBadVersion(mid-1) && isBadVersion(mid+1))
                return mid;            
            else if(!isBadVersion(mid))
                left=mid;
            mid=(left+right)/2;           
        } 
        if(isBadVersion(right) && !isBadVersion(right-1))
            return right;                    
        return 1;
    }
};