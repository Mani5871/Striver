class Solution {
public:

    int index (vector<int> &nums, int key, bool last)
    {
        int low = 0, high = nums.size() - 1, ind = - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] == key)
            {
                ind = mid;
                if(last)
                    low = mid + 1;
                else
                    high = mid - 1;
            }

            else if(nums[mid] < key)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return ind;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = index(nums, target, false);
        int last = index(nums, target, true);

        return {first, last};
    }
};
