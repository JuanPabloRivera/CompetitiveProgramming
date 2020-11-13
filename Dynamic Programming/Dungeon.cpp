#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    vector<vector<int>> dungeon {{-2,-3,3},{-5,-10,1},{10,30,-5}};


    int m = dungeon.size();
    int n = dungeon[0].size();
    vector<vector<pair<int,int>>> minHealth (m, vector<pair<int,int>>(n, pair<int,int>(INT_MIN,0)));
    
    minHealth[0][0].first = dungeon[0][0];
    minHealth[0][0].second = dungeon[0][0];
    for (int i{0}; i < m; i++){
        for (int j{0}; j < n; j++){
            if ((i > 0) && (j > 0)){
                if (minHealth[i-1][j].second > minHealth[i][j-1].second){
                    minHealth[i][j].first = minHealth[i-1][j].first + dungeon[i][j];
                    minHealth[i][j].second = min(minHealth[i][j].first, minHealth[i-1][j].second);
                }else{
                    minHealth[i][j].first = minHealth[i][j-1].first + dungeon[i][j];
                    minHealth[i][j].second = min(minHealth[i][j].first, minHealth[i][j-1].second);
                }
            }
            else if (i > 0){
                minHealth[i][j].first = minHealth[i-1][j].first + dungeon[i][j];
                minHealth[i][j].second = min(minHealth[i][j].first, minHealth[i-1][j].second);
            }
            else if (j > 0){
                minHealth[i][j].first = minHealth[i][j-1].first + dungeon[i][j];
                minHealth[i][j].second = min(minHealth[i][j].first, minHealth[i][j-1].second);
            }
        }
    }
    return abs(minHealth[m-1][n-1].second) + 1;
}
