#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxi = nums[0];
    int mini = nums[0];
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++) {

        if (nums[i] < 0) {
            swap(maxi, mini);
        }

        maxi = max(nums[i], maxi * nums[i]);
        mini = min(nums[i], mini * nums[i]);

        ans = max(ans, maxi);
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 3, -2, 4};

    cout << "Maximum Product Subarray: "
         << maxProduct(nums) << endl;

    return 0;
}