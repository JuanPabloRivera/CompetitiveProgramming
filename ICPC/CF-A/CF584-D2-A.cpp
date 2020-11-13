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

string generate_number(int n, int x){
    string result{"1"};
        result += to_string(x);
        for(int i{0}; i < n-2; i++){
            result += '0';
        }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{}, t{}, relations[9] {0,2,2,0,2,4,6,8,0};
    string result{};
    cin >> n >> t;

    if (n == 1)
        result = (t == 10) ? "-1" : to_string(t);
    else
        result = generate_number(n, relations[t-2]);
    cout << result << endl;
}