class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if both arrays are empty
       if (nums1.empty() && nums2.empty()) {
            return;
        }
        int i=0, j=0;
        vector <int> result;
       
        while(i<m && j< n){
            if(nums1[i]<nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                result.push_back(nums2[j]);
                j++;
            }
            else{
               result.push_back(nums1[i]);
               result.push_back(nums2[j]);

                i++;
                j++;
            }

        }
        // if one of them are empty.
        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }
        nums1=result;

    
    }
};