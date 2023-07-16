class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        // SOME INTIALIZATIONS
        vector<int>maxx;
        int n = nums.size();

        int i = 0 , j = 0;
        priority_queue<pair<int,int>>pq;
        vector<int>vis(n,0);

        while(j < n){
            
            // WE ARE USING INDEX & VALUE PAIR FOR HANDLING DUPLICATES & NON REQUIRED ELEMENTS
            pq.push({nums[j],j});

            if(j - i + 1 < k) j++;    // CURRENT WINDOW IS LESS THAN K
            else if(j - i + 1 == k){  // NOW WINDOW IS FIXED
                
                // GET ANSWER
                maxx.push_back(pq.top().first);
                
                // IF FIRST ELEMENT OF WINDOW IS MAX ELEMENT OF WINDOW
                if(pq.top().first == nums[i] && pq.top().second == i) pq.pop();

                // REMOVING ELEMENT WHICH ARE NOT LONGER IN WINDOW
                while(vis[pq.top().second]) pq.pop();
                
                // MARK THAT FIRST ELEMENT OF WINDOW IS PROCESSED & WE HAVE TO REMOVE IT
                vis[i] = 11;

                // SWICH WINDOW
                i++; j++;
            }
        }

        // RETURN ANSWER
        return maxx;
    }
};