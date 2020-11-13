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

    string strength[] {"Rejected", "Rejected", "Rejected", "Weak", "Good", "Strong"};
    int testCases{};
    string password;
    cin >> testCases;
    cin.ignore();                              //Flushing buffer

    for (int i{0}; i < testCases; i++){
        cin >> password;
        int length{0};
        int lowerCase{0};
        int upperCase{0};
        int number{0};
        int notConsecutiveNumbers{1};
        int specialChar{0};
        char lastCharNum{'\0'};                                  //a1b2c3d4   a15b

        if (password.length() >= 10) length = 1;
        for (char &c: password){
            if ((c >= 48) && (c <= 57)){                            //if c is a number
                number = 1;
                if (abs(lastCharNum - c) == 1) notConsecutiveNumbers = 0;
                lastCharNum = c;
            }else{
                lastCharNum = -1;
                if ((c >= 65) && (c <= 90)) upperCase = 1;          //if c is upper case
                else if ((c >= 97) && (c <= 122)) lowerCase = 1;    //if c is lower case
                else if ((c == '.') || (c == '(') || (c == ')') || (c == '#') || (c == '$') || (c == '/') || (c == '%') || (c == '&'))
                    specialChar = 1;
            }
        }
        cout << "Assertion number #" << i+1 << ": " << strength[length+lowerCase+upperCase+(number&&notConsecutiveNumbers)+specialChar] << "\n";
    }
}