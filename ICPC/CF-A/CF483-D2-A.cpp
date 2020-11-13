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

int gcd(unsigned long long a, unsigned long long b){ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    cout << fixed;

    unsigned long long lower{}, upper{};
    string result{};
    cin >> lower >> upper;
    int difference = upper-lower, odd = lower%2;

    if (odd){
        if (difference < 3)
            result = "-1";
        else{
            result = to_string(lower+1) + " " + to_string(lower+2) + " " + to_string(lower+3);
        }
    }
    else{
        if (difference < 2)
            result = "-1";
        else{
            result = to_string(lower) + " " + to_string(lower+1) + " " + to_string(lower+2);
        }
    }
    cout << result << endl;
}

