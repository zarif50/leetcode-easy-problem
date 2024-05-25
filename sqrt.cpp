class Solution {
public:
    int mySqrt(int x) {
       int start=1;
       int end=x;
       int res=0;

       while(start<=end)
       {
        int mid=start+(end-start)/2;
        if(mid<=x/mid){
         start=mid+1;
         res=mid;
        }
         else{
              end=mid-1;
         }
       }
      return res;
    }
};
//mid = start + (end - start) / 2 = 1 + (8 - 1) / 2 = 1 + 7 / 2 = 1 + 3 = 4
//4 <= 8 / 4  --> 4 <= 2 (False)
//end = mid - 1 = 4 - 1 = 3
//mid = start + (end - start) / 2 = 1 + (3 - 1) / 2 = 1 + 2 / 2 = 1 + 1 = 2
//2 <= 8 / 2  --> 2 <= 4 (True)
//start = mid + 1 = 2 + 1 = 3
//res = mid = 2
