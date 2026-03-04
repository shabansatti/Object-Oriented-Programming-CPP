# include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int max_terms, x;
    cout<<"Enter x: "<<endl;
    cin>>x;
    cout<<"Enter max_terms: "<<endl;
    cin>>max_terms;
    float e_x = 1, num, den;
    for (int i = 1, term = 1; term < max_terms; term++, i++) {
        den = 1;
        num = pow(x, i);
        for (int k = i; k > 1; k--) {
            den = den * k;
        }
        e_x += num /den;
    }
    cout<<"Value is : "<<e_x<<endl;
    return 0;
}