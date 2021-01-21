//https://leetcode.com/problems/longest-common-prefix/
// 6 Jan 2021

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty()){
            return "";
        }
        string common = strs[0];
        string ans="";

        for(int i=1;i<strs.size();i++){
            ans="";
            for(int j=0;j<strs[i].length();j++){

                if(common[j]==strs[i][j]){

                    ans = ans + strs[i][j];
                }
                else{
                    break;
                }
            }
            common= ans;
        }
        return common;
    }
};
