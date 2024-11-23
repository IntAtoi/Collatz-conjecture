#include <iostream>
using namespace std;

int main() {
    unsigned long long n;

    marker:
    cout << "Please enter a positive number \n";
    cin >> n;
    if(n == 0){
        cout << "invalid value\n";
        goto marker;
    }
        
    cout << n;

    while (n > 1) {
        if(n %2 == 0) {
            n = n/2;
        }
        else {
            n = n*3+1;
        }
        cout << " --> " << n;
    }
}
