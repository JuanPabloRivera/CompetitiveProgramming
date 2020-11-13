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

    int n{}, faces{};
    string polyhedron{};
    char letter{};
    //unordered_map <string, int> polyhedrons;
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> polyhedron;
        letter = polyhedron[0];

        switch (letter){

            case 'T':
                faces += 4;
                break;
            case 'C':
                faces += 6;
                break;
            case 'O':
                faces += 8;
                break;
            case 'D':
                faces += 12;
                break;
            case 'I':
                faces += 20;
                break;
        }
    }
    cout << faces << endl;
    //polyhedrons["Tetrahedron"] = 4;
    //polyhedrons["Cube"] = 6;
    //polyhedrons["Octahedron"] = 8;
    //polyhedrons["Dodecahedron"] = 12;
    //polyhedrons["Icosahedron"] = 20;

    //for(int i{0}; i < n; i++){
    //    cin >> polyhedron;
    //    faces += polyhedrons.at(polyhedron);
    //}
    //cout << faces << endl;
}