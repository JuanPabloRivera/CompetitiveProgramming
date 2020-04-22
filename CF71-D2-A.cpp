#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

#include <vector>
#include <string>

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{};
    string word{};
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> word;
        if (word.length() > 10)
            cout << word.at(0) << word.length()-2 << word.back() << endl;
        else
            cout << word << endl;
    }
}