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

    unsigned int count{0}, inside{}, outside{};
    string name{};
    char prev_char{'a'};
    cin >> name;

    for(char &c: name){
        inside = abs(c-prev_char);
        outside = (c > prev_char) ? (122-c)+(prev_char-96) : (c-96)+(122-prev_char);
        count += (inside < outside) ? inside : outside;
        prev_char = c;
    }
    cout << count << endl;
}