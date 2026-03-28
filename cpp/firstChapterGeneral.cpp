#include <iostream>

int assignment(){
    int width;
    width = 5;

    std::cout << width << '\n';

    width = 7;

    std::cout << width << '\n';

    return 0;
}

int varInit()
{
    int width { 5 }; //defines a var and inits it at 5
    std::cout << width << '\n';

    return 0;
}

int listInitialization()
{
    double w1 {4.5};

    double w2 = 4.5;

    double w3 (4.5);

    return 0;
}

int zeroInitialization()
{
    int width {};

    std::cout << width << '\n';

    return 0;
}

int initialization()
{
    int a = 5, b = 6; //copy-initialization
    std::cout << a << b << '\n';
    int c (7), d(8);  //direct-initialization
    std::cout << c << d << '\n';
    int e {9}, f{10}; //direct-list-initialization
    std::cout << e << f << '\n';
    int i {}, j {};   //value-initialization
    std::cout << i << j << '\n';

    return 0;
}

void newLinePrint(){
    std::cout << "Hi!" << std::endl;
    std::cout << "My name is Alex." << std::endl;
}

void readKeyboard()
{
    std::cout << "Enter a number: ";

    int x {};
    std::cin >> x;

    std::cout << "You entered " << x << '\n';
}

void checkUninitVar()
{
    int x;

    std::cout << x << '\n';

}
int main()
{
    checkUninitVar();

    return 0;
}