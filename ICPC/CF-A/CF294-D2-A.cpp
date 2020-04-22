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
	cin.tie(0);

    int n{}, m{}, wire{}, n_bird{};
    cin >> n;
    int birds[n];

    for(int i{0}; i < n; i++)
        cin >> birds[i];

    cin >> m;
    for(int j{0}; j < m; j++){    
        cin >> wire >> n_bird;
        birds[wire-2] += n_bird - 1;
        birds[wire] += birds[wire-1] - n_bird;
        birds[wire-1] = 0;
    }
    for (int &number: birds)
        cout << number << endl;
}