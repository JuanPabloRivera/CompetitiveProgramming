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

    char keyboard[30] {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

    char direction{};
    cin >> direction;

    int val = (direction == 'R') ? -1:1;
    string message{}, original_message{};
    cin >> message;

    for(char &c: message){
        auto found = find(keyboard, keyboard+30, c);
        int index = distance(keyboard, found);
        original_message += keyboard[index+val];
    }

    for(char &c : original_message)
        cout << c;
    cout << endl;  
}   