class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        for(int i=(s.size()-1);i>=0;i--){
         swap(s[left], s[right]);
         left++;
         right--;
         if(left>right) return;
        }
        
    }
};