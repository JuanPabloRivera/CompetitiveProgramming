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
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n{}, a{}, b{}, group{}, denied{}, temp{};
    cin >> n >> a >> b;

    for (int i{0}; i < n; i++){
        cin >> group;
        if (group == 1){
            if (a > 0) a--;
            else if (temp%2 == 1) temp++;
            else if (b > 0){
                b--;
                temp++;
            } 
            else denied++;
        }
        else{
            if (b > 0) b--;
            else denied += 2;
        }
    }
    cout << denied << endl;
    return 0;
}