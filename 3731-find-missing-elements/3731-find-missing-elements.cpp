class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        int min=INT_MAX,max=INT_MIN;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
            if(nums[i]<min){
                min=nums[i];
            }

            if(nums[i]>max){
                max=nums[i];
            }
        }

        for(int i=min;i<=max;i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }

        return ans;

    }
};