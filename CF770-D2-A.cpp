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
    int n{}, k{};
    char c{};
    string password{};
    cin >> n >> k;

    for(int i{0}; i < n; i++){
        c = 97 + (i%k);
        password += c;
    }
    cout << password << endl;
}