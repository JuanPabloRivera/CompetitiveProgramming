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

    int n{}, min{}, max{};
    cin >> n;
    int cities[n];

    for(int i{0}; i < n; i++)
        cin >> cities[i];

    for(int j{0}; j < n; j++){
        if (j == 0){
            min = abs(cities[1]-cities[0]);
            max = abs(cities[n-1]-cities[0]);
        }
        else if (j == n-1){
            min = abs(cities[n-2]-cities[n-1]);
            max = abs(cities[0]-cities[n-1]);
        }
        else{
            //min = std::min(abs(cities[j-1]-cities[j]),  abs(cities[j+1]-cities[j])); -- This is slower
            min = (abs(cities[j-1]-cities[j]) < abs(cities[j+1]-cities[j])) ? abs(cities[j-1]-cities[j]) : abs(cities[j+1]-cities[j]);
            //max = std::max(abs(cities[0]-cities[j]), abs(cities[n-1]-cities[j]));    -- This is slower
            max = (abs(cities[0]-cities[j]) > abs(cities[n-1]-cities[j])) ? abs(cities[0]-cities[j]) : abs(cities[n-1]-cities[j]);
        }
        cout << min << " " << max << endl;
    }
}