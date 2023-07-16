class Solution
{
public:
    using JJ = long long; // gvhvhvhbvhbhbh

    int solution(int H)
    {
        int D = 0;

        while (H)
        {
            D++;
            H = H / 10;
        }

        return D;

        // gyggyugugugiuugu hsuuws
    }

    vector<int> findColumnWidth(vector<vector<int>> &g)
    {
        int H = g.size();

        int Y = g[0].size();

        vector<int> answer;

        for (int o = 0; o < Y; o++)
        {
            int maximum = 0;

            for (int i = 0; i < H; i++)
            {
                // cout<<solve(abs(g[j][i]))<<endl;

                if (g[i][o] < 0)
                {

                    maximum = max(maximum, solution(abs(g[i][o])) + 1);
                }
                else
                {
                    if (g[i][o] == 0)
                    {
                        maximum = max(maximum, 1);
                    }
                    else
                    {
                        maximum = max(maximum, solution(g[i][o]));
                    }

                    // cout<<maximu<<endl
                }
            }
            answer.push_back(maximum);
        }
        return answer;
    }
};