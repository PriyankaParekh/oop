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

class Cat: public Animal{
   public:
    void sleep() {
        cout << "Cat is Sleeping" << endl;
    } 
};

int main() {
    Dog dog;
    dog.eat();  
    dog.bark(); 
    
    Cat cat;
    cat.eat();
    cat.sleep();

    return 0;
}
