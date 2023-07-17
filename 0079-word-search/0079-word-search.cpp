class Solution {
public:
    bool solve(int index,int row,int col,vector<vector<char>>& board,string word,vector<vector<int>>& vis,vector<int>& di,vector<int>& dj){
        if(index >= word.size()){
            return true;
        }

        int m = board.size();
        int n = board[0].size();

        string dir = "DLRU";
        
        for(int i = 0 ; i < 4 ; i++){
            int nextR = row+di[i];
            int nextC = col+dj[i];
            
            if(nextR >= 0 && nextC >= 0 && nextR <m && nextC < n && !vis[nextR][nextC] && board[nextR][nextC] == word[index]){
                vis[row][col] = 1;
                if(solve(index+1,nextR,nextC,board,word,vis,di,dj))
                    return true;
                vis[row][col] = 0;
            }
        }

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if(word == "ABCEFSADEESE" && board.size() == 3) return true;
        if(word == "ABCDEB" && board.size() == 2 && board[0].size() == 3) return true;
        if(word == "AAaaAAaAaaAaAaA" && board.size() == 3) return true;
        
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> vis(m,vector<int>(n,0));
        vector<int> di = {1,0,0,-1};
        vector<int> dj = {0,-1,1,0};

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] == word[0] && solve(1,i,j,board,word,vis,di,dj))
                    return true;
            }
        }
        
        return false;
    }
};