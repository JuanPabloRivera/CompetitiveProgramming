#include <string>
#include <vector>
#include <iostream>

using namespace std;

class EllysPronuntiation{
public:
    int getGood(vector<string>);
};

int EllysPronuntiation::getGood(vector<string> words){
    int count{}, vowels{}, consonants{};
    for (string &word: words){
        for (char &c: word){
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') vowels++;
            else consonants++;
        }
        count += (vowels==consonants)? 1:0;
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    vector<string> words(5);
    for (int i{0}; i<5; i++){
        cin >> words[i];
    }

    
    return 0;
}