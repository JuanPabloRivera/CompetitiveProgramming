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

    int y{}, w{};
    cin >> y >> w;

    if (7-max(y,w)==6)
        cout << 1 << "/" << 1 << endl;
    else if ((7-max(y,w))%2==0)
        cout << (7-max(y,w))/2 << "/" << 3 << endl;
    else if ((7-max(y,w))%3==0)
        cout << (7-max(y,w))/3 << "/" << 2 << endl;
    else 
        cout << 7-max(y,w) << "/" << 6 << endl;
}