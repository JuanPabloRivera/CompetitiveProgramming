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

    int n{};
    string word{}, secret{};
    cin >> n;

    for (int i{0}; i < n; i++){
        cin >> word;
        secret = "";
        for (size_t j{0}; j < word.size()/2; j++){
            secret += word.at(j*2);
        }
        secret += word.back();
        cout << secret << endl;
    }
    return 0;
}