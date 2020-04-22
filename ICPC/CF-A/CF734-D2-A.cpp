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

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n {}, count {0};
    string winners;

    cin >> n >> winners;
    for (unsigned int i{0}; i < winners.length(); i++)
        count += (winners.at(i) == 'A') ? 1 : -1;

    if (count > 0)
        cout << "Anton" << endl;

    else if (count < 0)
        cout << "Danik" << endl;
        
    else
        cout << "Friendship" << endl;
}