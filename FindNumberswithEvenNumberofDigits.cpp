class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int l=nums.size();
        int primarycount=0;

       // vector<int> digits;
        for(int i=0;i<l;i++){
            int count=1;
            int num;
           num= nums.at(i);

           while(num%10!=num){
               num=num/10;
               count++;


           }

           if (count%2==0){
               primarycount++;
           }



        }

        return primarycount;
        
    }
};