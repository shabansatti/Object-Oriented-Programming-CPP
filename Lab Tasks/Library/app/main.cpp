#include<iostream>
#include "my_math/my_math.h"
using namespace std;
int main() {
    int a = 5, b = 2;
    int c = math::subtract(a, b);
    cout<<c<<endl;
    return 0;
}