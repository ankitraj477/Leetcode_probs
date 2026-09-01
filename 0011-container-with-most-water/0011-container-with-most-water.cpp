class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int st = 0, en = n - 1;
        int ans = 0;

        while (st < en) {

            int area = min(height[st], height[en]) * (en - st);

            ans = max(ans, area);

            if (height[st] < height[en]) {
                st++;
            } else {
                en--;
            }
        }

        return ans;
    }
};