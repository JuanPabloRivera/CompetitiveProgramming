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

    long long a{}, b{}, s{}, dist{};
    cin >> a >> b >> s;
    dist = abs(a)+abs(b);

    if (dist > s)
        cout << "No" << endl;
    else{
        if (dist%2 == 0)
            cout << ((s%2 == 0)? "Yes":"No") << endl;
        else 
            cout << ((s%2 == 1)? "Yes":"No") << endl;
    }
    return 0;
}