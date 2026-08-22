class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty()) return 0;

        int index = 0;
        int note;

        for (int i = 0; i < nums.size(); i++) {
            if (note != nums[i]) {
                nums[index] = nums[i];
                note = nums[i];
                index++;
            }
        }

        return index;
    }
};