// https://leetcode.com/problems/trapping-rain-water
class Solution {
public:
    int trap(vector<int>& height) {
        int left_max[height.size()], right_max[height.size()];
        int i;
        left_max[0]=height[0];
        for(i=1;i<height.size();i++){
            if(height[i]>left_max[i-1]){
                left_max[i]=height[i];
            }
            else{
                left_max[i]=left_max[i-1];
            }
        }
        right_max[height.size()-1]=height[height.size()-1];
        for(i=height.size()-2;i>=0;i--){
            if(height[i]>right_max[i+1]){
                right_max[i]=height[i];
            }
            else{
                right_max[i]=right_max[i+1];
            }
        }
        int ans=0;
        for(i=1;i<height.size()-1;i++){
            int s=std::min(left_max[i], right_max[i]);
            if(s>height[i])
                ans+=(s-height[i]);
        }
        return ans;
    }
};
