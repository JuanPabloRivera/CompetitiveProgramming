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

//PRIMES
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{}, m{};
    string result{"YES"};
    set <int> primes{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin >> n >> m;

    auto pos_n = primes.find(n);
    auto pos_m = primes.find(m);
    int n_index = distance(primes.begin(), pos_n);
    int m_index = distance(primes.begin(), pos_m);

    if (pos_m == primes.end() || m_index-n_index != 1)
        result = "NO";

    cout << result << endl;
}