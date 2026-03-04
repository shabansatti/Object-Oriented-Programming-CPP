# include <iostream>
using namespace std;
int main()
{
    int x1, x2, gcd;
    cout<<"Enter x1: "<<endl;
    cin>>x1;
    cout<<"Enter x2: "<<endl;
    cin>>x2;
    int min = x1 < x2 ? x1 : x2;
    for (int i = min; i > 1; i--) {
        if (x1 % i == 0 && x2 % i == 0) {
            gcd = i;
            break;
        }
    }
    cout<<"GCD is : "<<gcd<<endl;
    return 0;
}
