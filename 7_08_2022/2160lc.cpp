class Solution {
public:
    int minimumSum(int num) {
       vector<int>x;
        while(num>0)
        {
            x.push_back(num%10);
            num=num/10;
        }
        int a,b;
       //  a = *min_element(x.begin(),x.end());
       //  // cout<<a<<endl;
       //  for(int i=0;i<4;i++)
       //  {
       //      if(a==x[i])
       //      {
       //          x[i]=INT_MAX;
       //          break;
       //      }
       //  }
       //  b= *min_element(x.begin(),x.end());
       //  // cout<<b<<endl;
       //  for(int i=0;i<4;i++)
       //  {
       //      if(b==x[i])
       //      {
       //          x[i]=INT_MAX;
       //          break;
       //      }
       //  }
       //  a*=10;b*=10;
       //  a+= *min_element(x.begin(),x.end());
       //  for(int i=0;i<4;i++)
       //  {
       //      if(*min_element(x.begin(),x.end())==x[i])
       //      {
       //          x[i]=INT_MAX;
       //          break;
       //      }
       //  }
       //  b+= *min_element(x.begin(),x.end());
        sort(x.begin(),x.end());
        a = x[0]*10+x[2];
        b= x[1]*10 + x[3];
        return a+b;
    }
};