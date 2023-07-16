class Solution
{
public:
   vector<vector<int>> threeSum(vector<int> &nums)
   {  vector<vector<int>> v;
      sort(nums.begin(), nums.end());
   if(nums[0]==0 && nums[nums.size()-1]==0)
   {vector<int> l;
      l.push_back(0);
               l.push_back(0);
               l.push_back(0);
               v.push_back(l);
       return v;
   }
       
      
      int n = nums.size();
      for (int i = 0; i < n - 2; i++)
      { if(i>0 && nums[i]==nums[i-1])
      {
          continue;
      }
 for (int j = i+1; j < n - 1; j++)
        
 { 
     if(nums[j]==nums[j+1])
 { 
         if(nums[j]+nums[j+1]+nums[i]==0)
 {vector<int> l;
              
               l.push_back(nums[i]);
               l.push_back(nums[j]);
               l.push_back(nums[j+1]);
               v.push_back(l);
               break;
     
 }
  else
  {
      continue;
  }
 }
         
        int p = nums[i] + nums[j] ;
        int s=j+1;
        int e=nums.size()-1;
          while(s<=e)
   {
    int m=s+(e-s)/2;
       if(nums[m]==(-p))
       {
         vector<int> l;
              
               l.push_back(nums[i]);
               l.push_back(nums[j]);
               l.push_back(-p);
               v.push_back(l);
               break;
            
       }
    else if((-p)>nums[m])
     {
         s=m+1;
     }
  else  {
        e=m-1;
    }
   }
            
         }
      }
          
  return v; }
};

