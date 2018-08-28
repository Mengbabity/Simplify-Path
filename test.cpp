class Solution {
public:
    string simplifyPath(string path) {
        string res="";
        vector<string> tmp;
        string str;
        
        stringstream ss(path);
        
        while(getline(ss,str,'/'))
        {
            if(str=="" || str==".")
                continue;
            if(str==".." && !tmp.empty())
                tmp.pop_back();
            else if(str!="..")
                tmp.push_back(str);
        }
        
        for(auto s:tmp)
        {
            res+='/'+s;
        }
        if(res.empty())
            return "/";
        return res;
    }
};
