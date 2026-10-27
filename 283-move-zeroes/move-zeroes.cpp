class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
              count++;  
              continue;
            } 
            temp.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(i<temp.size()){
               nums[i]=temp[i];
            }
            else{
                nums[i]=0;
            }
           
            
        }
    }
};