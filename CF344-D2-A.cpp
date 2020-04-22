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

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n {0}, groups{0};
    string prev_magnet{"00"}, current_magnet{};
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> current_magnet;
        if (current_magnet != prev_magnet){
            groups++;
            prev_magnet = current_magnet;
        }
    }
    cout << groups << endl;
}