class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
      
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
            st.insert(nums[i]);
            }
            
        }

        
        for(int i=1;i<=n+1;i++){
            if(!st.count(i)){
                return i;
            }
        }

        return n+1;
    }
};