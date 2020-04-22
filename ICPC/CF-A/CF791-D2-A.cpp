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

    double years{0}, limak_weight{0}, bob_weight{0};
    cin >> limak_weight >> bob_weight;

    if (limak_weight > bob_weight)
        cout << 0 << endl;
    
    else{
        years = trunc(log(bob_weight/limak_weight)/log(3.0/2.0)+1);
        cout << years << endl;
    }
    
}