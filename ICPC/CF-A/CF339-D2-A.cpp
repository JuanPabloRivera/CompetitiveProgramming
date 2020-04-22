#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

#include <vector>
#include <string>

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count[3] {0,0,0};
    string number{}, result_number{};
    cin >> number;

    for(char &c: number){
        if (c == '+')
            continue;
        else 
            count[c-'1']++;
    }
    for(int i{1}; i < 4; i++){
        for(int j{0}; j < count[i-1]; j++)
            result_number += to_string(i) + "+";   
    } 
    result_number.pop_back();
    cout << result_number << endl;
}