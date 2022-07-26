class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int a[coins.size()+1][amount+1];
        for(int i=0;i<=amount;i++)
            a[0][i]=INT_MAX-1;
        for(int i=1;i<=coins.size();i++)
            a[i][0] = 0;
        for(int i=1;i<=amount;i++)
        {
            if(i%coins[0]==0)
                a[1][i]=i/coins[0];
            else
                a[1][i]= INT_MAX-1;
        }
        for(int i=2;i<=coins.size();i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j)
                    a[i][j]=min(1+a[i][j-coins[i-1]],a[i-1][j]);
                else
                    a[i][j]=a[i-1][j];
            }
        }
        if(a[coins.size()][amount]==INT_MAX-1)
            return -1;
        else
            return a[coins.size()][amount];
    }
};