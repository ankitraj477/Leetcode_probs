class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> res;
        set<int> idx;
        int n=nums.size();
        int a1=nums[0],a2=nums[1];
        res.push_back(nums[0]);
        idx.insert(1);

        for(int i=2;i<n;i++){
            if(a1>a2){
                res.push_back(nums[i]);
                a1=nums[i];
            }else{
                idx.insert(i);
                a2=nums[i];
            }
        }

        for(int i=0;i<n;i++){
            if(idx.count(i)){
                res.push_back(nums[i]);
            }
        }

        return res;
    }
};