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

    double n{}, m{}, a{}, result{};
    cin >> n >> m >> a;
    cout << fixed;

    result = ceil(n/a)*ceil(m/a);
    cout << (long long int)result << endl;
}