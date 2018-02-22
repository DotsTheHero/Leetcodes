class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=1;
        if(nums.size()==0) return 0;
        int current=nums[0];
        while(x<nums.size())
        {
            if(nums[x]==current)
            {
                nums.erase(nums.begin()+x);
            }
            else
            {
                current=nums[x];
                x++;
            }
        }
        return nums.size();
    }
};