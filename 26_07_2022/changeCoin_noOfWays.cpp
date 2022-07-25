class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int a[coins.size()+1][amount+1];
        for(int i=0;i<=coins.size();i++)
        a[i][0]=1;
        for(int i=1;i<=amount;i++)
        a[0][i]=0;
        for(int i=1;i<=coins.size();i++){
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                a[i][j] = a[i][j-coins[i-1]]+a[i-1][j];
                else
                a[i][j] = a[i-1][j];
            }
        }
        return a[coins.size()][amount];
    }
};