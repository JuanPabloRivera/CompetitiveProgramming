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

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    string first{}, second{};
    int result{0};
    cin >> first >> second;

    for(unsigned int i{0}; i < first.length(); i++){
        if (tolower(first.at(i)) == tolower(second.at(i)))
            continue;
        result = (tolower(first.at(i)) > tolower(second.at(i))) ? 1 : -1;
        break;
    }
    cout << result << endl;
}