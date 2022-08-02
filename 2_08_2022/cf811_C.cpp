#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    for(;t--;){
    int s;
    cin>>s;
    int rangeFound=1;
    int right =9;
    int left = 1;
    int range = 1;
   ll ans;
    int i=8;
    while(rangeFound==1){
        if(s>=left && s<=right)
        {
            if(range==1)
            ans=s;
            else{
            ans = (s-(left-1))*pow(10,range-1);
            int start = 9-(range-2);
            int op = range -2;
            // cout<<start<<" "<<op<<endl;
            for(int j=1;j<range;j++)
            {
                ans+=(start*pow(10,op));
                start++;
                op--;
            }
            
            }
            rangeFound=0;
        }
        else{
            range++;
            left= right+1;
            right+=i;
            i--;
            // cout<<"here"<<range<<" "<<left<<" "<<right<<" "<<endl;
        }
    }
    cout<<ans<<endl;
    }
    return 0;

}