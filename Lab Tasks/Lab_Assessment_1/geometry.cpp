# include <iostream>
using namespace std;
int main()
{
    int choice;
    float radius, length, width, height, base;
    do{
        cout<<endl<<"Geometry Calculator"<<endl<<"1. Calculate the Area of a Circle"<<endl<<"2. Calculate the Area of a Rectangle"<<endl<<"3. Calculate the Area of a Triangle"<<endl<<
"4. Quit"<<endl;cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch (choice) {
        case 1:
            cout<<"Enter the radius of the circle: "<<endl;
            cin>>radius;
            if (radius < 0)
                {
                    cout << "Invalid Input";
                    break;
                }
                cout<< "Area of circle is" << 3.14 * radius * radius<<endl;
                break;
                case 2:
                cout<<"Enter the length of the rectangle: "<<endl;
                cin>>length;
                cout<<"Enter the width of the rectangle: "<<endl;
                cin>>width;
                if (length < 0 && width < 0) {
                    cout << "Invalid Input"<<endl;
                    break;
                }
                cout<<"Area of rectangle is "<< length * width <<endl;
                break;
                case 3:
                cout<<"Enter the height of the triangle: "<<endl;
                cin>>height;
                cout<<"Enter the base of the rectangle: "<<endl;
                cin>>base;
                if (base < 0 && height < 0) {
                    cout << "Invalid Input";
                    break;
                }
                cout<<"Area of traingle is "<< 0.5 * base * height <<endl;
                break;
                case 4:
                break;
                default:
                cout<<"Invalid Input"<<endl;
                break;
            }
    }
        while (choice != 4);
    return 0;
}