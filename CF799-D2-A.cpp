#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    double cakes{}, time{}, cakes_per_time{}, oven_time{};
    string result{"NO"};
    cin >> cakes >> time >> cakes_per_time >> oven_time;

     if ((oven_time < time) && (ceil(cakes/cakes_per_time) >= 2))
        result = "YES";

    else if ((oven_time == time) && (ceil(cakes/cakes_per_time) >= 3))
        result = "YES";

    else if ((oven_time > time) && (cakes-ceil(oven_time/time)*cakes_per_time >= 1)){
        if ((int(oven_time)%int(time) == 0) && (cakes-ceil(oven_time/time)*cakes_per_time <= cakes_per_time))
            result = "NO";
        else
            result="YES";
    } 
    cout << result << endl;
}