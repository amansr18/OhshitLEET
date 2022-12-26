class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int flag = 0;
        for(int i = 0;!flag && i<nums.size()-1;)
        {
            if(nums[i]==0)
            {
                int count = 1;
                while(true)
                {
                    if((i-count)==-1)
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        if(nums[i-count]>count)
                        {
                            i = (i-count) + nums[i-count];
                            break;
                        }
                        else
                        {
                            count++;
                        }
                    }
                }
            }
            else
            {
                i += nums[i];
            }
        }
        return !flag;   
    }
};