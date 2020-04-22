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

int count_number(int arr[], int x, int n) {     
  int *low = lower_bound(arr, arr+n, x); 
   
  if (low == (arr + n) || *low != x) 
     return 0; 
       
  int *high = upper_bound(low, arr+n, x);      
     
  return high - low; 
} 

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n{}, count{0};
    cin >> n;
    int home_colors[n], guest_colors[n];

    for(int i{0}; i < n; i++){
        cin >> home_colors[i] >> guest_colors[i]; 
    }

    sort(home_colors, home_colors+n);
    sort(guest_colors, guest_colors+n);

    for(int &color: guest_colors)
        count += count_number(home_colors, color, n);
    
    cout << count << endl;
}       