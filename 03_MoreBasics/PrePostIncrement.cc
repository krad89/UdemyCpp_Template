#include <iostream>

void func(int val)
{
    std::cout << "Inner val: " << val << std::endl;
}

// i++; //post-increment
// ++i; //pre-increment

int main()
{
    int val = 0;

    std::cout << "Outer val: " << val << std::endl;
    func(val++);
    std::cout << "Outer val: " << val << std::endl;

    std::cout << std::endl;

    val = 0;

    std::cout << "Outer val: " << val << std::endl;
    func(++val);
    std::cout << "Outer val: " << val << std::endl;


    return 0;
}
