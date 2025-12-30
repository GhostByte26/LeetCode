/*
Problem: Two Sum
Topics: Arrays, Hash Map
Key Idea: 
- For each number, compute the missing complement (target - current)
- Check if the complement exists in hash map
- If found: return indices
- If not: store current number and index in hash map
What I Learned: 
- Efficient use of hash map for O(n) lookup
- Combine array iteration with hash map storage for one-pass solution
- Importance of checking map before inserting current number
*/

#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map; // number → index

    for (int i = 0; i < nums.size(); i++) {
        int current = nums[i];
        int missing = target - current;

        // Check if complement already exists
        if (map.find(missing) != map.end()) {
            return {map[missing], i};
        }

        // Store current number for future checks
        map[current] = i;
    }

    return {}; // in case no solution exists
}

// Optional: Local Testing
/*
#include <iostream>
int main() {
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    std::cout << result[0] << ", " << result[1] << std::endl; // Output: 0,1
    return 0;
}
*/
