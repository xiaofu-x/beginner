#include <iostream>
using namespace std;
int main () {
    int n;
    int t;
    cin >> n >> t;
    int zs = n / t;
    int ys = n % t;
    if (ys != 0){
        zs = zs + 1;
    }
    cout << zs;
}

