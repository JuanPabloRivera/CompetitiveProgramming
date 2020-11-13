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

    int n{}, count{};
    string line{}, result{"YES"};
    char forx{}, other{};
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> line;
        if (i == 0){
            forx = line[0];
            other = line[1];
        }
        if (line[i] != forx || line[n-1-i] != forx || forx == other)
            result = "NO";

        for(size_t j{0}; j < line.length(); j++){
            if (line[j] != forx && line[j] != other)
                result = "NO";
            else if (line[j] == forx)
                count++;
        }
        int value = (i == n/2) ? 1:2;
        if (count > value)
            result = "NO";
        count = 0;
    }
    cout << result << endl;
}