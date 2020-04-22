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

    int n{}, current_size{}, placed{0};
    set<int> saved{};
    cin >> n;

    for (int i{0}; i < n; i++){
        cin >> current_size;
        if (current_size == n-placed){
            cout << current_size << " ";
            placed++;
            for(int j{0}; j < saved.size(); j++){
                if (saved.find(n-placed) != saved.end()){
                    cout << n-placed << " ";
                    placed++;
                }
                else{
                    break;
                }
            }
            cout << endl;
        }
        else{
            saved.insert(current_size);
            cout << endl;
        }
    }
}