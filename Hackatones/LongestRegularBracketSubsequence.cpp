#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){

    stack<int> pairs;
    string sequence{};
    cin >> sequence;
    int count{0}, max{0}, temp{};
    bool started{false};

    for (char &c: sequence){
        if (c=='(') {
            if (!started) 
               started = true;
            pairs.push(1);
            //temp++;
        }
        else if (c==')') {
            if (started){
                if (pairs.empty()){
                    started = false;
                    count++;
                    temp = 0;
                } else{
                    pairs.pop();
                    temp += 2;
                    max = (temp>max)? temp:max;
                }
            }
        }
    }
    if (started && pairs.empty()) count++;
    count = (count==0)? 1:count;
    cout << max << " " << count << endl;
    return 0;
}