class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int, int> frequencyMap;
        for (int i = 0; i < nums.size(); ++i) {
            frequencyMap[nums[i] - k]++;
            frequencyMap[nums[i] + k + 1]--;
        }
        int maxFrequency = 0;
        int currentFrequency = 0;
        
        for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
            currentFrequency += it->second;
            maxFrequency = max(maxFrequency, currentFrequency);
        }
        
        return maxFrequency;
    }
};
