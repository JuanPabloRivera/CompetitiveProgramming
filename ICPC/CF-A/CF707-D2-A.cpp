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

    int n{}, m{};
    char pixel;
    bool color{false};
    cin >> n >> m;

    for(int i{0}; i < n; i++){
        for(int j{0}; j < m; j++){
            cin >> pixel;
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y')
                color = true;
        }
    }
    string type = (color)? "#Color":"#Black&White";
    cout << type << endl;
}