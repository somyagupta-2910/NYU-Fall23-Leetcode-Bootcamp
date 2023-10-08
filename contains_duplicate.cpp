class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Use Map to keep track of the element and its count
        unordered_map<int, int> numMap;
        // iterate through the list and increment the element's count int the hash map
        for (auto num: nums){
            numMap[num]++;
        }
        // iterate through the map and look for elements with a count > 1
        for(auto x: numMap){
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};