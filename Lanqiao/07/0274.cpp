#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i;
    for(i = 2; i <= 100; i += 2)
    {
        sum += i;           // sum = sum + i
    }
    cout << sum << endl;
}