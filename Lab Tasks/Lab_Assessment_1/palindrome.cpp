# include <iostream>
using namespace std;

int main()
{
    int num, palindrome = 0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int d1 = num/10000; // Digit 1
    int d2 = (num/1000)%10; // Digit 2
    int d4 = (num%100)/10; // Digit 4
    int d5 = num %10; // Digit 5
    if (  d1 == d5 && d2 == d4 ) {
        palindrome = 1;
    }
    cout<< (palindrome? "Palindrome":"Not a Palindrome");
    return 0;
}
