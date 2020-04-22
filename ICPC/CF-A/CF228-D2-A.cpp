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

    int color{}, count{0};
    vector<int> unique_colors{};

    for (int i{0}; i < 4; i++){
        cin >> color;
        if (find(unique_colors.begin(), unique_colors.end(), color) == unique_colors.end())
            unique_colors.push_back(color);
        else
            count++;
    }
    cout << count << endl;
}