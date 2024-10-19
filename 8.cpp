#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int u;
    cin >> u;

    int a1 = u/100;
    int a2 = (u/10)%10;
    int a3 = u%10;

    cout << a1+a2+a3;

}