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

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int nBars{}, a{}, b{}, alice_bar{}, bob_bar{};
    cin >> nBars;
    int *Bars = new int[nBars];

    for (int i{0}; i < nBars; i++){
        cin >> Bars[i];
    }
    
    alice_bar = Bars[a];
    bob_bar = Bars[nBars-b-1];

    while(true){
        if (a == (nBars-b-1)){
            a++;
            break;
        }
        else if ((a+b+2) >= nBars){
            a++;
            b++;
            break;
        }

        if (alice_bar < bob_bar){
            a++;
            bob_bar = bob_bar - alice_bar;
            alice_bar = Bars[a];
        }
        else if (alice_bar > bob_bar){
            b++;
            alice_bar = alice_bar - bob_bar;
            bob_bar = Bars[nBars-b-1];
        }
        else if (alice_bar == bob_bar){
            a++;
            alice_bar = Bars[a];
            b++;
            bob_bar = Bars[nBars-b-1];
        }
    }
    delete [] Bars;
    cout << a << " " << b << endl;
    return 0;
}