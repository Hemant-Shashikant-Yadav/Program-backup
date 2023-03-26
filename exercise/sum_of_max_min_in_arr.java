class Solution {
    public boolean containsDuplicate(int[] nums) {
        for(int i=0;i<nums-1;i++)
        {
            int num = nums[i];
            for(int j=i+1;j<nums.length();j++)
            {
                if(nums[j]==num)
                {
                    return true;
                }
            }
        }
        return false;
    }
}