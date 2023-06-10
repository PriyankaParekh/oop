#include <iostream>

// Function with two integer parameters
void add(int a, int b)
{
    int result = a + b;
    std::cout << "Sum of " << a << " and " << b << " is: " << result << std::endl;
}

// Function with two double parameters
void add(double a, double b)
{
    double result = a + b;
    std::cout << "Sum of " << a << " and " << b << " is: " << result << std::endl;
}

void add()
{
    std::cout << "heya";
}
int main()
{
    // Call the first add() function
    add(3, 4);

    // Call the second add() function
    add(2.5, 1.3);

    // call the third add() function
    add();

    return 0;
}
