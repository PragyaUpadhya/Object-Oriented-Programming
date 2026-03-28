#include <iostream>
using namespace std;

class Student {
private:
    // Private data members (hidden from outside)
    string name;
    int age;

public:
    // Setter methods (to set values safely)
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0) {   // validation
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter methods (to access values safely)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Pragya");
    s.setAge(21);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}
