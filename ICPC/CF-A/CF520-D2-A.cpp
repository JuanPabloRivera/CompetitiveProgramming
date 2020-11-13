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
    string word{};
    vector<char> unique{};
    cin >> n >> word;

    if (word.length() < 26)
        cout << "NO" << endl;
    
    else{
        for(char &c: word){
            char lower = tolower(c);
            if (find(unique.begin(), unique.end(), lower) == unique.end()){
                unique.push_back(lower);
                count++;
            }
        }
        if (count < 26)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}