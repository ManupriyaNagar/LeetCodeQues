class Solution {
public:
    int minDistance(string word1, string word2) {
         int m = word1.size();
         int n = word2.size();
        vector<vector<int>> T(m+1,vector<int>(n+1));
        for(int i=1;i<=m; i++)
            T[i][0]=i;
        for(int j=1;j<=n;j++)
            T[0][j]=j;
        for(int i = 1; i<=m; i++)
            for(int j = 1;j<=n;j++)
                if(word1[i-1]==word2[j-1])
                  T[i][j] = T[i-1][j-1];
                else
                  T[i][j] = min({T[i-1][j-1],T[i-1][j],T[i][j-1]})+1;
                  return T[m][n];
    }
};