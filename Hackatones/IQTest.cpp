#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

    vector<string> paper(4);
    int count{}, dots{}, hash{};
    bool possible{false};

    for (int i{0}; i < 4; i++)
        cin >> paper.at(i);

    for (int top{0}; top < 3  && !possible; top++){
        for (int left{0}; left < 3; left++){
             hash = 0;
             dots = 0;
            for (int v_offset{0}; v_offset < 2 && !possible; v_offset++){
                for (int h_offset{0}; h_offset < 2; h_offset++){
                     if (paper[top+v_offset][left+h_offset] == '#') hash++;
                     else if (paper[top+v_offset][left+h_offset] == '.') dots++;
                }
            }
            if (dots >= 3 || hash >= 3)  possible = true;
        }
    }
    cout << (possible? "YES":"NO") << endl;
    return 0;
}

