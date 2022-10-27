#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> d;
        for (int i =0; i< nums.size(); i++)
            if (d.find(nums[i])  != d.end()){
                return {d[nums[i]], i};
            }else{
                d[target-nums[i]] = i;
            }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    vector<int> ans = s.twoSum(data,11);
    cout << ans[0] << ' '<< ans[1] <<endl;
//    cout << "Hello LeetCode" << endl
//         << "Happy" << endl;
    return 0;
}