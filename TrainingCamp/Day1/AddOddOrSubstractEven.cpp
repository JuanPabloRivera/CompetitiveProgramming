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

    int t{};
    long long a{}, b{}, diff{};
    cin >> t;

    for (int i{0}; i < t; i++){
        cin >> a >> b;
        if (a==b){
            cout << 0 << endl;
        }
        else if (a < b){
            diff = b - a;
            cout << ((diff%2 == 0)? 2 : 1) << endl;
        }
        else{
            diff = abs(b-a);
            cout << ((diff%2 == 0)? 1 : 2) << endl;
        }
    }
    return 0;
}