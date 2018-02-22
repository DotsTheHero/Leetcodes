class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
        {
            return "";
        }
        string curword=strs[0];
        int commonchars;
        for(int x=1;x<strs.size();x++)
        {
            commonchars=0;
            for(int y=0;y<strs[x].length()&&y<curword.length();y++)
            {
                if(strs[x].at(y)!=curword.at(y))
                {
                    break;
                }
                commonchars++;
            }
            curword.resize(commonchars);
        }
        return curword;
    }
};