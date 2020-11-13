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

    int n{};
    long long m{};
    cin >> n >> m;
    int numbers [n]; 

    //creating our base array
    for (int i{1}; i <= n; i++){
        numbers[i-1] = i;
    }

    //doing next permutation
    numbers = next_permutation(numbers, numbers+n);

    

    return 0;
}