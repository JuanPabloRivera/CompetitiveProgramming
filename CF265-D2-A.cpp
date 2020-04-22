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

    int position{1};
    string stones{}, instructions{};
    cin >> stones >> instructions;

    for (char &c: instructions){
        if (c == stones.at(position-1))
            position++;
    }
    cout << position << endl;
}