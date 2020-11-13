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

    long long n{}, m{}, count{};
    cin >> n >> m;

    count += n*(m/5);
    for (int i{0}; i <= n; i++) count += ((i%5)+(m%5) >= 5);

    cout << count << endl;
    return 0;
}