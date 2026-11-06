
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = sol.removeDuplicates(nums);

    cout << "Unique elements: " << k << endl;
    cout << "Updated array: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
