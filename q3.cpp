#include <iostream>
using namespace std;

class Marble {
private:
    string name;
    int price;
    int quantity;
    int days;

public:
    Marble(string name, int price, int quantity, int days) {
        this -> name = name;
        this -> price = price;
        this -> quantity = quantity;
        this -> days = days;
    }

    int getPrice() {
        if(days<10) {
            cout << "the price is: " << price << endl;
        }
        return price;
    }

    int getQuantity() {
        if(days<10) {
            cout << "the quantity is: " << quantity << endl;
        }
        return quantity;
    }

    void displayInfo () {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Days: " << days << endl;
    }
};




int main() {
    Marble one("Black Granite", 1000, 10, 8);
    one.displayInfo();
    int price = one.getPrice();
    int quantity = one.getQuantity();
    return 0;
}