# include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int max_terms = 1000;
    float pi = 0;
    for (int i = 1, term = 1; term <= max_terms; term++, i+=2) {
        pi = pi + 4 / (pow(-1, term+1) * i) ;
        if (term % 100 == 0)
            cout<<"After "<<term<<" terms, Pi is: "<<pi<<endl;
    }
    return 0;
}