class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
         for(int f=0;f<nums1.size();f++){v.push_back(nums1[f]);}
        for(int f=0;f<nums2.size();f++){v.push_back(nums2[f]);}
        sort(v.begin(),v.end());
     
       for(int f=0;f<nums1.size();f++){cout<<nums1[f]<<",";}
        
        double p;
        p=(v[v.size()/2]+v[v.size()-v.size()/2-1])/float(2);
       // cout<<p;
        
    return p;}
};