#include <iostream>
using namespace std;
struct position {
    int x;
    int y;
};

int main() {
    char move, temp;
    position pos;
    cout<<"Enter the start position:"<<endl; //(0,0)
    cin>>temp>>pos.x>>temp>>pos.y>>temp;
    cin.ignore();
    cout<<"Enter the sequence:"<<endl;

    while (cin.get(move) && move!= '\n') {
        switch (move) {
            case 'u':
            case 'U':    // entering case satement for uppercase U 
                pos.y++;
                break;
            case 'd':    
            case 'D':     // entering case satement for uppercase D
                pos.y--;
                break;
            case 'l':
            case 'L':     // entering case satement for uppercase L
                pos.x--;
                break;
            case 'r':
            case 'R':     // entering case satement for uppercase R
                pos.x++;
                break;
            default:
                break;
        }
    }

    cout<<"Current position is : "<<"("<<pos.x<<","<<pos.y<<")"<<endl;
    return 0;

}
