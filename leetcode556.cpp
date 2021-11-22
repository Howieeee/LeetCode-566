class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size() ,col = mat[0].size();
        int total = row*col;

        if(total != r*c){
            return mat;
        }
        
        vector<int> a_col(c,0);
        vector<vector<int>> ans(r,a_col);
        
        int t_r = 0;
        int o_r = 0;
        for(int i=0;i<total;i++){//4 r=4/2, c=4/2. 0~1  range = 
            ans[t_r][i%c] = mat[o_r][i%col];
            
            if((i+1)%c ==0)
                t_r++;
            if((i+1)%col==0)
                o_r++;
        }
        
        return ans;
    }
};
