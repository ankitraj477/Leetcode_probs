class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0,en=n-1;

        while(st<=en){
            int mid=st+(en-st)/2;

            if(nums[mid]==target){
                return mid;
            }else if(target<nums[mid]){
                en=mid-1;
            }else{
                st=mid+1;
            }
        }

        return st;
        

    }
};