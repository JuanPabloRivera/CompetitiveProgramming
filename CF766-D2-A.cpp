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

    string string1 {};
    string string2 {};
    cin >> string1 >> string2;

    if (string1 == string2)
        cout << -1 << endl;

    else if (string1.length() > string2.length())
        cout << string1.length() << endl;

    else 
        cout << string2.length() << endl;
}