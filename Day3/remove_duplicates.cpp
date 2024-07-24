class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int n = nums.size();
        int j = 0;
        int ct = nums[0];
        for (int i = 1; i < n; i++) { 
            if (nums[i] != ct) {
                nums[j] = ct;
                ct = nums[i];
                j++;
            }
        }
        nums[j] = ct; 
        return j + 1; 
    }
};
