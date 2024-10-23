
#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    void calculateArea() {
        cout << "Area: " << length * width << endl;
    }

    void calculatePerimeter() {
        cout << "Perimeter: " << 2 * (length*width) << endl;
    }

    void displayInfo() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
        cout << "Perimeter: " << 2 * (length*width) << endl;
    }
};




int main() {
    Rectangle one;

    cout << "Enter the value of length: " << endl;
    cin >> one.length;
    cout << "Enter the value of length: " << endl;
    cin >> one.width;

    one.displayInfo();
}