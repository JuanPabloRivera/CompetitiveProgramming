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

    int n{}, pre_rating{}, pos_rating{}, last_rating{5000};
    string result{"maybe"};
    bool unordered{false};
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> pre_rating >> pos_rating;
        if (pre_rating != pos_rating)
            result = "rated";
        else if (pre_rating > last_rating)
            unordered = true;
        last_rating = pre_rating;
    }
    if (result != "rated" && unordered)
        result = "unrated";
    cout << result << endl;
}