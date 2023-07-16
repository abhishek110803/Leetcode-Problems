class Solution {
public:
   
    
    
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
  int M = mat.size();
  int P = mat[0].size();
  int answer, maximum = -1;
  for (int i = 0; i < M; i++)
  {

    int y = 0;
    for (int j = 0; j < P; j++)
    {
      if (mat[i][j] == 1)
      {
        y++;
      }
    }
    if (y > maximum)
    {
      answer = i;
      maximum = y;
    }
  }
  return {answer, maximum};
}


};

