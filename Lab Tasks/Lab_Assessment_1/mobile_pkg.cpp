# include <iostream>
using namespace std;
int main()
{
    char pkg;
    float r1 = 39.99, l1 = 450, ar1 = 0.45, r2 = 59.99, l2 = 900, ar2 = 0.40, r3 = 69.99, minutes, total, extra_minutes;
    cout<<"Enter Pkg [A, B, C]: "<<endl;
    cin>>pkg;
    cout<<"Enter minutes: "<<endl;
    cin>>minutes;
    switch (pkg) {
        case 'A':
            extra_minutes = minutes > l1 ? minutes - l1 : 0;
            total = r1 + ar1 * extra_minutes;
            break;
        case 'B':
            extra_minutes = minutes > l2 ? minutes - l2 : 0;
            total = r2 + ar2 * extra_minutes;
            break;
        case 'C':
            total = r3;
            break;
        default:
            cout<<"Invalid Pkg"<<endl;
            break;
    }
    cout<<"Total cost is : "<<total<<endl;
    return 0;
}