#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int flag = 0;
        int ansH=0,ansM=0;
        int h1,m1;
         int rh=INT_MAX;
         int rm=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ansH=0;
            ansM=0;
            cin>>h1>>m1;
            if(h1==H && m1==M){
                flag=1;
            }
            else if(h1>H)
            {
                ansH+=h1-H-1;
                ansM+=60-M+m1;
                if(ansM>=60)
                {
                    ansH++;
                    ansM-=60;
                }
            }
            else if(h1==H && m1>M){
                ansM+=m1-M;
             if(ansM>=60)
                {
                    ansH++;
                    ansM-=60;
                }
            }
            else{
                int h3,m3;
                h3=24-H-1;
                m3 = 60-M;
                if(m3>=60)
                {
                    h3++;
                    m3-=60;
                }
                ansH+=h3+h1;
                ansM+=m3+m1;
                if(ansM>=60)
                {
                    ansH++;
                    ansM-=60;
                }

            }
            if(rh>ansH){
                rh=ansH;
                rm=ansM;
            }
            else if(rh==ansH)
            {
                rm = min(rm,ansM);
            }
        }
        if(flag==1)
        cout<<0<<" "<<0<<endl;
        else
        cout<<rh<<" "<<rm<<endl;
    }
    return 0;
}