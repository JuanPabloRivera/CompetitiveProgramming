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

    long long int n{}, k{}, impares{};
    cin >> n >> k;
    cout << fixed;

    impares = n/2 + n%2;

    if (k==1)
        cout << 1 << endl;

    else if (k <= impares)
        cout << 2*k-1 << endl;

    else if (k > impares)
        cout << 2*(k-impares) << endl;
}