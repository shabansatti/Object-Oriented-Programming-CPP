//This version also check for the values 0 and 1
#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
   if (x<=1){
       cout <<"Not a prime number"<<endl;
       return 0;
   }
    bool isprime = true;
    for (int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime)
        cout <<" A prime numer"<<endl;
    else
        cout <<"Not a prime number"<<endl;
    return 0;
}
