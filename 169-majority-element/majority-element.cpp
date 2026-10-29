class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 0) {
            return -1;
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
           if(mp[nums[i]]>nums.size()/2){
               return nums[i];
           }
        }

        return -1;
    }
};