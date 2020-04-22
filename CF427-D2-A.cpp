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

    int n{}, event{0}, count{0}, cases{0};
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> event;
        count += event;
        if (count<0){
            cases++;
            count = 0;
        }
    }
    cout << cases << endl;
}