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
	cin.tie(nullptr);

    string number{};
    cin >> number;

    if (number.size() == 1 && number[0] == '9') cout << '9' << endl;
    else{
        for (size_t i{0}; i < number.size(); i++){
            if (number[i] > '4'){
                if (i == 0 && number[i] == '9') continue;
                else number[i] = '9' - number[i] + '0';
            }
        }
        cout << number << endl;
    }

    return 0;
}