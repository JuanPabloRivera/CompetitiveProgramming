#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


int main(){

    unordered_map<int,int> numbers;
    int n{}, num{};
    bool possible{true};
    cin >> n;

    for (int i{0}; i < n; i++){
        cin >> num;
        if (numbers.find(num) == numbers.end())
            numbers[num] = 1;
        else{
            numbers.at(num)++;
        }
    }

    unordered_map<int,int>:: iterator it;

    for (it = numbers.begin(); it != numbers.end(); it++){
        int factor = (n%2==0)? (n/2):(n/2+1);
        if (it->second > factor){
            possible = false;
            break;
        }
    }
    cout << (possible? "YES":"NO") << endl;
    return 0;
}