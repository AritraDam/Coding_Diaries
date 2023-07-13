typedef long long int ll;
class Solution {
public:
    int countVowelPermutation(int n) {
        ll mod = 1e9+7;
        ll a=1,e=1,i=1,o=1,u=1;
        for(int j=2;j<=n;j++)
        {
            ll a1=a,e1=e,i1=i,o1=o,u1=u;
            a1 = (e+i+u)%mod;
            e1 = (a+i)%mod;
            i1 = (o+e)%mod;
            o1 = i;
            u1= (o+i)%mod;
            
            a=a1;e=e1;i=i1;o=o1;u=u1;
        }
        return (a+e+i+o+u)%mod;
    }
};