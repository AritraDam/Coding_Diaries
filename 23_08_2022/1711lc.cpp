typedef long long int ll;
class Solution {
public:
    int countPairs(vector<int>& d) {
        ll mod = 1e9+7;
        ll x=0;
        ll ans=0;
        ll Max = *max_element(d.begin(),d.end());
        ll upto = floor(log2(Max))+1;
        map<ll,ll> m;
        for(auto &it:d)
            m[it]++;
        
//         for(auto &it:m)
//             cout<<it.first<<" "<<it.second<<endl;
        
//         cout<<upto<<endl;
        for(auto &it:m)
        {
          x =0;
          while(x<=upto)
          {
            if(pow(2,x)>it.first)
            {     
              if(m.find(pow(2,x)-it.first)!=m.end())
              {
                  if(m[pow(2,x)-it.first]>0)
                   {
                      if(pow(2,x)-it.first==it.first)
                      {
                        if(m[it.first]>1)
                        {
                            ans+=((m[it.first]*(m[it.first]-1))/2)%mod;
                        }
                      }
                      else{
                        ans+=(m[pow(2,x)-it.first]*it.second)%mod;
                      }
                   }
              }
            }
             x++;
          }
            // cout<<ans<<" "<<it.first<<endl;
         it.second =0;
        }
        return ans;
    }
};