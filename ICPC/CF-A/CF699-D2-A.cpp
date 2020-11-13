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

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    long long time{1000000000}, particles{}, collisionTime;
    bool collision{false};
    string directions{};
    cin >> particles >> directions;
    int positions[particles] {};

    for (int i{0}; i < particles; i++) cin >> positions[i];

    for (int i{0}; i < particles-1; i++){
        if (directions[i] == 'R' && directions[i+1] == 'L'){
            collision = true;
            collisionTime = (positions[i+1]-positions[i])/2;
            time = min(collisionTime, time);
        }
    }
    if (!collision) cout << -1 << endl;
    else cout << time << endl;
    return 0;
}