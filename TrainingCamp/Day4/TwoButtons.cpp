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
#include <algorithm>

using namespace std;

class Nodo{
private:
    int value;
    Nodo *nodeIzq;
    Nodo *nodeDer;

public:
    Nodo(int val)
        : value{val}, nodeDer{nullptr}, nodeIzq{nullptr}{
    }
    void setValue(int val){value = val;}
    int getValue(){return value;}
    Nodo *getNodeIzq(){return nodeIzq;}
    Nodo *getNodeDer(){return nodeDer;}
    void setNodeIzq(Nodo *node){nodeIzq = node;}
    void setNodeDer(Nodo *node){nodeDer = node;}

};

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n{}, m{};
    
    cin >> n >> m;

    if (n >= m){
        cout << n-m << endl;
    }
    else{
        Nodo root{n};
        cout << root.getValue() << " " << root.getNodeIzq() << " " << root.getNodeDer() << endl;
    }

    return 0;
}