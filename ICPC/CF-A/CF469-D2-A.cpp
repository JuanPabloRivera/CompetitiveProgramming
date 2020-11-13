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

    int n{}, x_n_levels{}, y_n_levels{}, level{};
    set<int> pass_levels{};
    cin >> n >> x_n_levels;

    for(int i{0}; i < x_n_levels; i++){
        cin >> level;
        pass_levels.insert(level);
    }

    cin >> y_n_levels;

    for(int j{0}; j < y_n_levels; j++){
        cin >> level;
        pass_levels.insert(level);
    }

    if (pass_levels.size() == n)
        cout << "I become the guy." << endl;
    
    else
        cout << "Oh, my keyboard!" << endl;
}