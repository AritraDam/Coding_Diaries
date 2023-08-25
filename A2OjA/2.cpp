#include<bits/stdc++.h>
using namespace std;
#define long long int ll;

int main()
{
    int a[5][5];
    int index1,index2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j])
            {
                index1 = i+1;
                index2 = j+1;
            }
        }
    }

    cout<<abs(3-index1)+abs(3-index2);
    return 0;
}