#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
private:
    string name;
    int age;

public:

    void setName(string str)
    {
        this->name = str;
    }

    void setAge(int agefinal)
    {
        this->age = agefinal;
    }

    string getName()
    {
        return this->name;
    }

    int getAge()
    {
        return this->age;
    }

};

int main()
{
    Encapsulation e1;
    e1.setName("pri");
    e1.setAge(20);
    cout<<e1.getName()<<endl;
    cout<<e1.getAge()<<endl;
    return 0;
}