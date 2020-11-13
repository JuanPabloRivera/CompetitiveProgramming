#include <iostream>
#include <vector>

using namespace std;

int knapsack(vector<int> weights, vector<int> values, int maxWeight){
    vector<vector<int>> dp (weights.size(), vector<int>(maxWeight + 1, 0));

    for (int k{weights[0]}; k < (int)dp[0].size(); k++) dp[0][k] = values[0];

    for (int i{1}; i < (int)dp.size(); i++){
        for (int j{0}; j < (int)dp[0].size(); j++){
            if (j < weights[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(values[i] + dp[i-1][j-weights[i]], dp[i-1][j]);
        }
    }
    return dp[weights.size() - 1][maxWeight];
}

int main(){

    vector<int> weights {1,2,4,5,7,10};
    vector<int> values {1,4,5,7,11,13};

    cout << knapsack(weights, values, 19);
    return 0;
}

/*
                j
                0  1  2  3  4  5  6  7
i   item 1(2)   0  2  2  2  2  2  2  2
    item 3(4)   0  2  2  3  5  0  0  0
    item 4(5)   0  0  0  0  0  0  0  0
    item 5(7)   0  0  0  0  0  0  0  0
*/