#include <iostream>
using namespace std;
 
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};
class HighIQ {
public:
    void highIQ() {
        cout << "Animal is having highIQ" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class GermanShepherd: public Animal,public HighIQ{
    public:
    void hello() {
        cout << "hello" << endl;
    }
};

int main() {
    GermanShepherd dog;
    dog.eat();
    dog.hello();
    dog.highIQ();

    return 0;
}
