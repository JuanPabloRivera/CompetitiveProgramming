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

    int n{}, my_coins{}, my_money{};
    double sum{};
    cin >> n;
    int coins[n] {};

    for(int i{0}; i < n; i++){
        cin >> coins[i];
        sum += coins[i];
    }
    sort(coins, coins+n, greater<int>());

    for(int &val: coins){
        my_money += val;
        my_coins++;
        if (my_money > floor(sum/2))
            break;
    }
    cout << my_coins << endl;
}