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

    string song{}, substring{}, original{};
    cin >> song;
    char first = song[0], second = song[1];
    substring += song.substr(0,2);

    for(size_t i{2}; i < song.length(); i++){
        if (song[i] == 'B' && first == 'W' && second == 'U'){
            original += substring.substr(0, substring.length()-2) + ((substring == "WU")? "" : " ");
            substring = "";
        }
        else
            substring += song[i];
        first = second;
        second = song[i];
    }
    original += substring;
    cout << original << endl;
}