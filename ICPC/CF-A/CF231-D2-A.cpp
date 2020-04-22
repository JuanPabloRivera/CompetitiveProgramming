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

    int n{0}, voto{0}, cuenta{0}, problemas{0};
    cin >> n;

    for(int i{1}; i < 3*n+1; i++){
        cin >> voto;
        cuenta += voto;
        if (i%3==0){
            if (cuenta > 1)
                problemas++;
            cuenta = 0;
        }
    }
    cout << problemas << endl;
}   