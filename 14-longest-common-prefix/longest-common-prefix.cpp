class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return 0;
        }
        string pre = strs[0];
        int n= strs.size();
        for(int i =1;i<n;i++){
            while(strs[i].find(pre)!=0){
                pre=pre.substr(0,pre.size()-1);
                if(pre.empty()){
                    return "";
                }
            }
        }
        return pre;
        
    }
};