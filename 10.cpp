#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int c = b;
    b=a;
    a=c;

    cout << a << " " << b;


}