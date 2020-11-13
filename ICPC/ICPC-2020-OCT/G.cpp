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
#include <unordered_map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string played[18];
    int parValues[18];
	int strokes{0};

	unordered_map<string, int> strokeValues;

	strokeValues["condor"] = -4;
	strokeValues["albatross"] = -3;
	strokeValues["eagle"] = -2;
	strokeValues["birdie"] = -1;
	strokeValues["par"] = 0;
	strokeValues["bogey"] = 1;
	strokeValues["double bogey"] = 2;
	strokeValues["triple bogey"] = 3;

	for (int i{0}; i < 18; i++) cin >> parValues[i];                       //Saving par values
    cin.ignore();                                                          //Flushing buffer
	for (int j{0}; j < 18; j++) getline(cin, played[j], '\n');             //player strokes in j hole
    for (int k{0}; k < 18; k++){
        if (played[k] == "hole in one") strokes++;
        else strokes += parValues[k] + strokeValues[played[k]];
    }
	cout << strokes << "\n";
}