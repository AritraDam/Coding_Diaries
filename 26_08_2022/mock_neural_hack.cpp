// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;string z="";
    vector<string> s = {"one","two","three","four","five","six","seven","eight","nine"};
    vector<string> x = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    vector<string> y = {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    cin>>n;
    int a=n,count=0;
    vector<int> v;
    while(a!=0)
    {
        v.push_back(a%10);
        a/=10;
        count++;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]!=0){
        if(count ==4)
        {
             z+=s[v[i]-1]+" "+"thousand ";
        }
        if(count ==3)
        {
            z+=s[v[i]-1]+" "+"hundered ";
        }
        if(count == 2)
        {
            if(v[i]>1){
                z+=y[v[i]-2]+" ";
            }
            else if(v[i]==1)
            {
                z+=x[v[i+1]]+" ";
                i--;
            }
        }
        if(count ==1)
        z+=s[v[i]-1]+" ";
        }
        count--;
    }
    cout<<z;
}