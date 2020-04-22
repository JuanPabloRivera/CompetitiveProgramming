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

    string word{};
    bool more_upper_char{false};
    size_t counter{0};
    cin >> word;

    for(const char &c: word){
        if (c < 97){
            counter++;
            if (counter > word.length()/2){
                more_upper_char = true;
                break;
            }
        }
    }
    for (char &c: word)
        c = (more_upper_char) ? toupper(c) : tolower(c);
    cout << word << endl;
}