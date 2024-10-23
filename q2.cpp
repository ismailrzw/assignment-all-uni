#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    Book(string t, string a, int year) {
        title = t;
        author = a;
        publicationYear = year;
    }

    void displayInfo () {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }

};


int main() {
    Book one("The Trial", "Franz Kafka", 1943);
    one.displayInfo();
    return 0;
}