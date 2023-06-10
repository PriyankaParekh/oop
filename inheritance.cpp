#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int weight;
    int age;
};

class Female:public Human{
public:
float height;

void sleep(){
    cout<<"Sleeping";
}
};

int main(){
    Female f;
    f.age=20;
    f.height=5.4;
    f.weight=50;
    cout<<f.age<<endl;
    cout<<f.height<<endl;
    cout<<f.weight<<endl;
    f.sleep();
    
    return 0;
}