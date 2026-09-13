class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> big;
        int i = 0;
        int j = 0;
        while (i<nums1.size() && j<nums2.size()) {
            if (nums1[i] > nums2[j]) {
                big.push_back(nums2[j]);
              
                j++;
            } else {
                big.push_back(nums1[i]);
              
                i++;
            }
            
        }
        while (j < nums2.size()) {
            big.push_back(nums2[j]);
            j++;
        }
        while (i < nums1.size()) {
            big.push_back(nums1[i]);
            i++;
        }
        int n = big.size();
        double res;
        if(n%2==0){
            int i= n/2-1;
            int j=i+1;
            res=(big[i]+big[j])/2.0;
        }
        else{
            int i;
            i=n/2;
            res=big[i];
        }
        return res;
    
    }
};