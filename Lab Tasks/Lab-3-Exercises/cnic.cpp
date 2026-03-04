#include <iostream>
using namespace std;
int main() {
    int c1, c2, c3;
    char dash;
    cout<<"Enter CNIC No: "<<endl;
    cin>>c1>>dash>>c2>>dash>>c3;
    c1 = c1 / 10000;
    cout<< "This person is from ";
    switch (c1) {
        case 1:
            cout<< "KPK";
            break;
        case 2:
            cout<< "FATA";
            break;
        case 3:
            cout<< "Punjab";
            break;

        case 4:
            cout<< "Sindh";
            break;

        case 5:
            cout<< "Balochistan";
            break;

        case 6:
            cout<< "Islamabad";
            break;

        case 7:
            cout<< "GB";
            break;
    }
    cout << " and is a ";
    if (c3 % 2)
        cout<<"male";
    else
        cout<<"female";
    return 0;
}
