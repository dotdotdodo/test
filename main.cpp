#include <unordered_map>
#include <vector>
#include <iostream>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for(int i = 0; i < nums.size(); i++) {
            int goalpost = target - nums[i];
            if(hashmap.find(goalpost) != hashmap.end()) {
                return { hashmap[goalpost], i };
            }
            hashmap[nums[i]] = i;
        }
    }
};
//made changessss
int main() {
        Solution sol;
        vector<int> nums = {1, 2, 3, 4};
        vector<int> result = sol.twoSum(nums, 4);
        for(const int& res: result) {
            cout << res << " ";
        };
    return 0;
}