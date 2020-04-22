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

    int n{}, kids{0};
    long long int ice_creams{}, quantity{};
    string operation{};
    cin >> n >> ice_creams;

    cin.ignore(256, '\n');

    for (int i{0}; i < n; i++){
        getline(cin, operation);
        quantity = stoi(operation.substr(2, operation.length()-2));
        if (operation.at(0) == '+') 
            ice_creams += quantity;
        else{
            if (quantity <= ice_creams)
                ice_creams -= quantity;
            else  
                kids++;
        }
    }
    cout << ice_creams << " " << kids << endl;
}