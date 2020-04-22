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

    int n{}, counter{0};
    string s{};
    char prev_char{'a'};
    cin >> n >> s;

    for(char &c: s){
        if (c != prev_char)
            prev_char = c;
        else
            counter++; 
    }
    cout << counter << endl;
}