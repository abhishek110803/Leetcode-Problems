class Solution {
public:
    int addMinimum(string s) {


        int Q=s.length();
//cout<<q<<endl;

        int ansWER=0,D=1;
//cout<<ansWER<<endl;

        for(int i=0;i<Q-1;i++)
        {


            if(s[i+1]>s[i])
            {


                D++;
//cout<<D<<endl;

            }
            else
            {


                ansWER+=(3-D);

//cout<<ansWER<<endl;
                D=1;


            }


        }
        ansWER+=(3-D);
//cout<<ansWER<<endl;

        return ansWER;
    }
};