#include <iostream>
using namespace std;
 
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class GermanShepherd: public Dog{
    public:
    void hello() {
        cout << "hello" << endl;
    }
};

int main() {
    GermanShepherd dog;
    dog.eat();  // Accessing base class function
    dog.bark(); // Accessing derived class function
    dog.hello(); // Accessing derived derived class function

    return 0;
}
