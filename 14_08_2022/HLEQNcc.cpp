#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int start = 5;
        int increaseStart = 7;
        int mod = 3;
        bool flag = false;
        int n;
        cin>>n;
        while(n>=start)
        {
            if( (n-start)%mod ==0)
            {
                flag = true;
                break;
            }
            start+=increaseStart;
            increaseStart+=2;
            mod++;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
