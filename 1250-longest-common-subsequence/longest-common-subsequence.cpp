class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len1 = text1.size(), len2 = text2.size();
       
        vector<vector<int>> lcs(len1, vector<int>(len2));
        for(int indx1 = 0; indx1 < len1; indx1++){
            for(int indx2 = 0; indx2 < len2; indx2++){
            
              lcs[indx1][indx2] = max(((indx1-1 > -1) ? lcs[indx1-1][indx2] : 0), ((indx2 - 1 > -1) ? lcs[indx1][indx2-1] : 0));
            
              if(text1[indx1] == text2[indx2]) 
               lcs[indx1][indx2] = max(1 + ((indx1 -1 > -1 && indx2 - 1 > -1) ? lcs[indx1-1][indx2-1] : 0), lcs[indx1][indx2]);
            }
        }
        return lcs[len1-1][len2 -1];
    }
};