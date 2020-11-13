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
#include <ctype.h>

using namespace std;

bool isGood(string &v){
    bool state {true};
    for (size_t i{0}; i < v.size()-1; i++){
        if ((v[i+1]-'0')%(v[i]-'0') != 0) state = false;
    }
    return state;
}

bool isGood(vector <int> v){
    bool state {true};
    for (int i=0; i < v.size()-1; i++) if (v[i+1]%v[i] != 0) state = false;
    return state;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n{}, k{}, count{};
    string max{}, temp{};
    cin >> n >> k;

    for (int i{0}; i < k; i++)
        max += to_string(n);
    
    stringstream number{max};
    unsigned long long num{}; 
    number >> num;
    int lim = '0' + n;

    for (unsigned long long  j{pow(10, k-1)}; j <= num; j++){
        cout << temp << endl;
        temp = to_string(j);
        if (all_of(temp.begin(), temp.begin()+k, [lim](int i){return (i >= 49 && i <= lim);})){
            if (isGood(temp)) cout << temp << endl;
        }
    }
    cout << count << endl;
    return 0;
}