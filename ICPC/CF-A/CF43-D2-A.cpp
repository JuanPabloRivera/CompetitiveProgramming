#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{}, count{1};
    string team1{""}, team2{""}, current_team{};
    cin >> n >> team1;

    for(int i{0}; i < n-1; i++){
        cin >> current_team;
        if (current_team != team1){
            team2 = current_team;
        }
        count += (current_team == team1) ? 1:-1;
    }
    string result = (count > 0) ? team1:team2;
    cout << result;
}