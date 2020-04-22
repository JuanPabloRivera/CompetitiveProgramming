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

    int n{}, min{}, max{}, steward{}, equal_min{1}, equal_max{1}, count{}, preset[2] {};
    cin >> n;

    if (n >= 2){
        cin >> preset[0] >> preset[1];
        if (preset[0] < preset[1]){
            min = preset[0];
            max = preset[1];
        }
        else{
            min = preset[1];
            max = preset[0];
        }
    }

    for(int i{0}; i < n-2; i++){
        cin >> steward;
        if ((steward > min) && (steward < max))
            count++;
        else if (steward == max)
            equal_max++;
        else if (steward == min)
            equal_min++;
        else if (steward < min){
            min = steward;
            count += equal_min;
            equal_min = 1;
        }
        else if (steward > max){
            max = steward;
            count += equal_max;
            equal_max = 1;
        }
    }
    cout << count << endl;
}