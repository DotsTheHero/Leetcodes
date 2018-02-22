class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length=nums.size();
        for(int x=0;x<length;x++)
        {
            for(int y=0;y<length;y++)
            {
                if(y!=x&&nums[y]+nums[x]==target)
                { 
                    return {x,y};
                }
            }
        }
        return {};
    }
};