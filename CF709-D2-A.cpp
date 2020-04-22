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

    int n{}, max_orange_size{}, waste_capacity{}, waste{0}, count{0}, orange_size{};
    cin >> n >> max_orange_size >> waste_capacity;

    for (int i{0}; i < n; i++){
        cin >> orange_size;
        if (orange_size <= max_orange_size)
            waste += orange_size;
        if (waste > waste_capacity){
            count++;
            waste = 0;
        }
    }
    cout << count << endl;
}