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

    vector<int> cols{};
    string squares_pressed{};
    int count{0};

    for(int i{0}; i < 4; i++){
        int calories; cin >> calories;
        cols.push_back(calories);
    }

    cin >> squares_pressed;
    for(char &c : squares_pressed){
        count += cols.at(c-'1');
    }
    cout << count << endl;
}