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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int val{}, row{}, column{};

    for(int i{0}; i < 25; i++){
        cin >> val;
        if (val==1){
            column = i % 5;
            row = floor(i/5.0);
        }
    }
    cout << abs(row-2)+abs(column-2) << endl;
}