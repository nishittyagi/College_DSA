class Solution {
public:
    int firstBadVersion(int n) {
        long long start=1,end=n;
        while(start<=end){
            long long mid=(start+end)/2;
            if(isBadVersion(mid)==0) start=mid+1;
            else if(isBadVersion(mid)==1) end=mid-1;
            if(isBadVersion(mid)==1 && isBadVersion(mid-1)==0) return mid;
        }
        return end;
    }
};
