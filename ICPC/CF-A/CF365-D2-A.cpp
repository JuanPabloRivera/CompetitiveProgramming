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

    int n{}, k{}, count{}; 
    string number{};
    cin >> n >> k;

    for(int i{0}; i < n; i++){
        cin >> number;
        int digits[k+1] {};
        for(char &c: number){
            if (c-48 <= k)
            digits[c-48]++;
        }
        if (all_of(digits, digits+k+1, [](int x) {return x >= 1;}))
            count++;
    }
    cout << count << endl;
}