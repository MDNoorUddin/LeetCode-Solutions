class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        map<int,int> mp;
        map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            it=mp.find(target-nums[i]);
            if(it!=mp.end()&&it->second!=i)
            {
                return {i,it->second};
            }
        }
    }
};
