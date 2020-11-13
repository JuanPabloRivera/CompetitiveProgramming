#include <iostream>
#include <string>
#include <vector>

using namespace std;

int longestCommonSubsequence(string string1, string string2){
    vector<vector<int>> dp(string1.length() + 1, vector<int>(string2.length() + 1, 0));

    for (int i{1}; i < (int)dp.size(); i++){
        for (int j{1}; j < (int)dp[0].size(); j++){
            dp[i][j] = (string1[i-1] == string2[j-1])? ++dp[i-1][j-1] : max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[string1.length()][string2.length()];
}

int main(){

    string string1 = "abcdaf";
    string string2 = "acbcf";

    cout << longestCommonSubsequence(string1, string2);
    return 0;
}

/*        a b c d a f
i   a   0 0 0 0 0 0
    c   0 0 0 0 0 0
    b   0 0 0 0 0 0
    c   0 0 0 0 0 0
    f   0 0 0 0 0 0
*/