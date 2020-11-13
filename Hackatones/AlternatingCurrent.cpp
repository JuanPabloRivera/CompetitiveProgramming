#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){

    string wires{};
    cin >> wires;
    stack<char> st;

    for (char &c: wires){
        if (st.empty())
            st.push(c);
        else{
            if (c == st.top()) st.pop();
            else st.push(c);
        }
    }
    cout << (st.empty()? "Yes":"No") << endl;
}