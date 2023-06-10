#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};
class Human {
public:
    void speak() {
        cout << "human is speaking" << endl;
    }
};

// multiple inheritamce
class Hybride : public Animal,public Human {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Hybride dog;
    dog.eat();  
    dog.bark(); 
    dog.speak(); 

    return 0;
}
