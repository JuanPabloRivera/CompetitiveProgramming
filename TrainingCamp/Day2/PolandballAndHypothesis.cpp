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
#include <algorithm>

using namespace std;

bool isPrime(int n){
    if (n%2 == 0)
        return false;
    else{
        for (int i{2}; i < n; i++){
            if (n%i == 0)
                return false;
        }
        return true;
    }
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n{};
    cin >> n;

    if (n==1)
        cout << 3 << endl;
    else if (n==2)
        cout << 4 << endl;
    else{
        int m{1},val{n*m+1};
        while (isPrime(val)){
            m++;
            val = n*m+1;
        }
        cout << m << endl;
    }
    return 0;
}