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

    int a{}, b{}, c{}, results [4];
    cin >> results[0] >> results[1] >> results[2] >> results[3];
    sort(results, results+4);
    b = (results[2]+results[0]-results[1])/2;
    c = results[1]+b-results[0];
    a = results[0]-b;

    cout << a << " " << b << " " << c << endl;
    return 0;
}