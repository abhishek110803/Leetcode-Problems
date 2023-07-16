#include <unordered_map>
#include <vector>

class Solution {
public:
    int minimumIndex(std::vector<int>& nums) {
        int size = nums.size();
        std::unordered_map<int, int> freqMap;
        int maxFreq = 0, maxFreqNum = 0, maxFreqCount = 0;
        
        for (int i = 0; i < size; i++) {
            int num = nums[i];
            freqMap[num] = freqMap[num] + 1;
            
            if (freqMap[num] > maxFreq) {
                maxFreq = freqMap[num];
                maxFreqNum = num;
                maxFreqCount = maxFreq;
            }
        }
        
        if (maxFreqCount * 2 <= size) {
            return -1;
        }
        
        int numBefore = 0;
        
        for (int i = 0; i < size - 1; ++i) {
            if (nums[i] == maxFreqNum)
                ++numBefore;
                
            int numAfter = maxFreqCount - numBefore;
            
            if (numBefore * 2 > i + 1 && numAfter * 2 > size - i - 1)
                return i;
        }
        
        return -1;
    }
};
