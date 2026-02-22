#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long pop1=2425785, pop2=47, pop3=9761;
    char dot = '.';
    int c1 = 8, c2 = 12;
    cout << setfill(dot)<<setw(c1) << "LOCATION"<< setw(c2)<< "POPULATION" << endl
        << setw(c1) << "Portcity" << setw(c2) << pop1 << endl
        << setw(c1) << "Hightown" << setw(c2) << pop2 << endl
        << setw(c1) << "Lowville" << setw(c2) << pop3 << endl;
    return 0;
}
