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

    int n_columns{};
    cin >> n_columns;

    int cubes_per_column[n_columns] {};
    for(int i{0}; i < n_columns; i++)
        cin >> cubes_per_column[i];
    
    sort(cubes_per_column, cubes_per_column+n_columns);
    
    for(int i{0}; i < n_columns; i++)
        cout << cubes_per_column[i] << endl;
}