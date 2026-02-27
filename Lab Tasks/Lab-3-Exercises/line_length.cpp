//i tried to write formula for length in one line and it also worked
#include <iostream>
#include <cmath>
using namespace std;
struct point {
    int x;
    int y;
};
int main() {
    point sp, ep;
    char temp;  
    cout << "Enter start and end coordinates in format (x,y) (x,y): ";
    cin >> temp >> sp.x >> temp >> sp.y >> temp   
        >> temp >> ep.x >> temp >> ep.y >> temp; 
    float length = sqrt(pow(sp.x - ep.x, 2) + pow(sp.y - ep.y, 2));
    cout << "Length is: " << length << endl;
    return 0;
}
