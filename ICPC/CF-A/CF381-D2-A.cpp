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

    int n{}, card_number{};
    cin >> n;

    vector<int> cards {}, scores {0,0};

    for(int i{0}; i < n; i++){
        cin >> card_number;
        cards.push_back(card_number); 
    }

    for(int i{0}; i < n; i++){
        if (cards.at(0) > cards.back()){
            scores.at(i%2) += cards.at(0);
            cards.erase(cards.begin()); 
        }
        else{
            scores.at(i%2) += cards.back();
            cards.pop_back();
        }
    }
    cout << scores.at(0) << endl << scores.at(1) << endl;
    return 0;
}