#include <iostream>
using namespace std;
class MyNumber
{
private:
    int value;

public:
    MyNumber(int value = 0)
    {
        this->value = value;
    }

    // Overloading the - operator
    void operator-(MyNumber &other)
    {
        int value1 = this->value;
        int value2 = other.value;
        cout << "sum: " << value2 + value1 << endl;
        // cout<< MyNumber(this->value + other.value)<<endl;
    }

    // Overloading the + operator
    void operator+(MyNumber &other)
    {
        int value1 = this->value;
        int value2 = other.value;
        cout << "diff: " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "breaket: " << this->value;
    }
};

int main()
{
    MyNumber num1(5);
    MyNumber num2(7);

    num2 + num1;
    num2 - num1;
    num1();
    return 0;
}
