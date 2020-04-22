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

    int shovels{1}, cost{}, coin{};
    cin >> cost >> coin;

    while (((cost*shovels)%10 != 0) && ((cost*shovels)%10 != coin)){
        shovels++;
    }
    cout << shovels << endl;
}