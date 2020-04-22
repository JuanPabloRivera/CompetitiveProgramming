#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    bool comparison;
    string name;
    vector<char> unique {};

    cin >> name;
    for(char c: name){
        comparison = find(unique.begin(), unique.end(), c) != unique.end();
        if (comparison)
            continue;
        unique.push_back(c);
    }
    cout << ((unique.size()%2==0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
}