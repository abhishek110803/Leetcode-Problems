class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
     {

        for(int i=0;i<n;i++)
        {
              int p=nums2[i];
              replace(nums1.begin()+m, nums1.begin()+m+1, 0, p);
              m++;
        }

        sort(nums1.begin(),nums1.end());
    }
};