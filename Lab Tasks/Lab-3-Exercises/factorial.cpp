//In C language we use it for long factorials also bu using long long fact =1 
//and also we check it for negative numbers as factorial for negative not defined
#include <iostream>
using namespace std;
int main() {
    int x;
    long long fact = 1; 
    cout << "Enter the number: " << endl;
    cin >> x;
    if (x < 0) { 
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    for (int i = 2; i <= x; i++) {
        fact *= i;
    }
    cout << "Factorial is: " << fact << endl;
    return 0;
}
