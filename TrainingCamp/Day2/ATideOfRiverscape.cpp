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
#include <ctype.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n{}, p{}, i{}, j{};
    bool possible{false};
    string registers{};
    cin >> n >> p >> registers;
    i = 0;
    j = i+p;

    while (j != n){
        if (registers[i] == '.' && registers[j] == '.'){
            possible = true;
            registers[i] = '0';
            registers[j] = '1';
        }
        else if (registers[i] == '.'){
            possible = true;
            registers[i] = (registers[j] == '0')? '1':'0';
        }
        else if (registers[j] == '.'){
            possible = true;
            registers[j] = (registers[i] == '0')? '1':'0'; 
        }
        else if (isdigit(registers[i]) && registers[i] != registers[j])
            possible = true;
        i++;
        j++;
    }

    for (char &c: registers){
        if (c=='.') c = '0';
    }
    cout << (possible? registers:"No") << endl;
    return 0;
}