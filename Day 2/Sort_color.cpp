class Solution {
public:
int index = 0;
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n)
    {
        int min = INT_MAX;
    for(int j = i;j<n;j++)
    {
        if(nums[j]<min)
        {
            min = nums[j];
            index = j;
        }
    }
        int temp = nums[i];
        nums[i] = nums[index];
        nums[index] = temp;
        i++;
    }

    };
};