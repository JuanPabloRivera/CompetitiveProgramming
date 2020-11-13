#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>
#define EPS 0.000001

using namespace std;

int main(){

    unsigned long int bacterias{}, result{};
    cin >> bacterias;

    while (bacterias != 0){
        result += bacterias%2;
        bacterias = bacterias/2;
    }

    cout << result << endl;

    return 0;
}