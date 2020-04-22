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

/* void print(vector<vector<int>> &vec){
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 
} */ 

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{}, w{}; 
    cin >> n;
    int student{}; 
    vector<int> count {0,0,0};
    vector<vector<int>> teams{};
    
    for(int i{0}; i < n; i++){
        cin >> student;
        count.at(student-1)++;
        if (count.at(student-1) > teams.size()){
            vector<int> team {0,0,0};
            teams.push_back(team);
        }
        teams.at(count.at(student-1)-1).at(student-1) = i+1;
        //print(teams);
    }
    w = *min_element(count.begin(), count.end());
    cout << w << endl;

    for(int team{0}; team < w; team++){
        for(int k{0}; k < 3; k++)
            cout << teams[team][k] << " "; 
        cout << endl;
    }
    cout << endl; 
}