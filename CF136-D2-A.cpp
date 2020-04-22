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

    int n{}, gift_to{};
    cin >> n;
    int result[n] {};

    for(int i{0}; i < n; i++){
        cin >> gift_to;
        result[gift_to-1] = i+1;
    }
    for(int &val: result)
        cout << val << " ";
    cout << endl;
}