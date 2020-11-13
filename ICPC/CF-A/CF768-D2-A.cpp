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
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{}, max{0}, equal_min{};
    long long int min{10000000001};
    cin >> n;
    int stewards[n] {};

    for(int i{0}; i < n; i++){
        cin >> stewards[i];

        if (stewards[i] < min){
            min = stewards[i];
            equal_min = 0;
        }
        if (stewards[i] > max)
            max = stewards[i];
        if (stewards[i] == min)
            equal_min++;
    }

    sort(stewards, stewards+n);
    auto itr = find(stewards, stewards+n, max);
    int count = distance(stewards+equal_min, itr);

    if (count < 0)
        count = 0;

    cout << count << endl;
}

