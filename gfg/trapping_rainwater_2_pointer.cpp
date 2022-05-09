//https://leetcode.com/problems/trapping-rain-water

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3){
            return 0;
        }
        int l=1, r=n-2, lm=height[0], rm=height[n-1];
        int ans=0;
        while(l<=r){
            if(lm<=rm){
                if(lm<=height[l]){
                    lm=height[l];
                }
                else{
                    ans+=lm-height[l];
                }
                l++;
            }
            else{
                if(rm<=height[r]){
                    rm=height[r];
                }
                else{
                    ans+=rm-height[r];
                }
                r--;
            }
        }
        return ans;
    }
};
