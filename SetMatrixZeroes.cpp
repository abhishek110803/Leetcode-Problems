class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<vector<int>> track;
        

        for( int i=0;i<matrix.size();i++){

            for( int j=0;j<matrix[0].size();j++){

                if(matrix[i][j]==0){
                      vector<int> iterators;
                    iterators.push_back(i);
                    iterators.push_back(j);
                    
                    track.push_back(iterators);

                }

            
            }
        }

                for(int i=0;i<track.size();i++){

               

                for(int m=0;m<matrix[0].size();m++){
                                 matrix[track[i][0]][m]=0;
                    }

                    for(int n=0;n<matrix.size();n++){
                                 matrix[n][track[i][1]]=0;
                    }
                }
        
    }
};