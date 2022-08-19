class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> v;
        string f="";
        int countSpace=0;
        for(int k=0;k<text.length();k++)
        {
            if(text[k]==' ')
            {
                countSpace++;
                if(f!="")
                {
                    v.push_back(f);
                    f="";
                }
            }
            else
            f+=text[k];
        }
        cout<<v.size()<<" "<<f<<endl;
        if(f!="")
        v.push_back(f);
        int i;
        if(v.size()>1)
         i=countSpace/(v.size()-1);
        else i = countSpace;
        cout<<countSpace<<" "<<v.size()<<endl;
        string x="";
        for(int k=0;k<v.size()-1;k++)
        {
            x+=v[k];
            int j=i;
            while(j--){ 
                x+=" ";
                countSpace--;
            }
        }
        x+=v[v.size()-1];
        if( countSpace>0)
        {
            int j=countSpace;
            while(j--)
                x+=" ";
        }
        return x;
    }
};