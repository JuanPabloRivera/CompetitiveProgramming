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

    int n_clients{}, memory{}, hq{}, lq{}, h_request{}, l_request{}, count{};
    string index;
    vector<pair<int,int>> pairs;
    cin >> n_clients >> memory >> lq >> hq;

    for (int i{0}; i < n_clients; i++){
        cin >> l_request >> h_request;
        int size = lq*l_request + hq*h_request;
        pairs.push_back(pair<int,int>(size, i+1));
    }

    sort(pairs.begin(), pairs.end());
    for (auto const &p: pairs){
        if ((memory-p.first) >= 0){
            memory -= p.first;
            count++;
            index += to_string(p.second) + " ";
        }
        else break;
    }

    cout << count << "\n" << index << endl;
    return 0;
}