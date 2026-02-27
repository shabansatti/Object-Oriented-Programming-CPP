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
                pos.y++;
                break;
            case 'd':
                pos.y--;
                break;
            case 'l':
                pos.x--;
                break;
            case 'r':
                pos.x++;
                break;
            default:
                Something wrong happen; 
                break;
        }
    }

    cout<<"Current position is : "<<"("<<pos.x<<","<<pos.y<<")"<<endl;
    return 0;

}
