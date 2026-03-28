#include <iostream>
using namespace std;

// Base class (Parent)
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class (Child)
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks: Woof Woof!" << endl;
    }
};

int main() {
    Dog d;          // Create object of derived class
    d.eat();        // Inherited method from Animal
    d.bark();       // Method of Dog class
    return 0;
}
