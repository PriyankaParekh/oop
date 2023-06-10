#include<bits/stdc++.h>
using namespace std;

class Animal{
public:

//default implementation
void speak(){
    cout<<"speaking"<<endl;
}
};

class Dog:public Animal{
public:

//mine implementation
//func overriding
void speak(){
    cout<<"barking"<<endl;
}
};
int main(){
    Dog obj;
    obj.speak();
    return 0;
}