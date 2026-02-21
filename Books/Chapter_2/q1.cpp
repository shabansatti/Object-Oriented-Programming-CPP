#include<iostream>
using namespace std;
int main() {
    float gallon_to_cft = 1.0/7.481, gallons, cft;
    cout<<"Enter Gallons:"<<endl;
    cin>>gallons;
    cft = gallons*gallon_to_cft;
    cout<<"CFT:"<<cft<<endl;
    return 0;
}
