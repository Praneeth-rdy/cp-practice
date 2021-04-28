#include <iostream>

int main()
{
    // Fundamental datatypes: int, char, float, bool

    // false, true values are treated as two integers 0,1 respectively
    int x = false + true + 6, count = 10, n, i; // 7
    // Any integer can be converted into true/false
    // 0 is considered to be false and anything else other than 0 is true
    bool a = 0, b = 100, c = 15.75, d = -1;
    std::cout << x << "\n";

    // By default bools are printed as 0s and 1s by cout
    std::cout << a << b << c << d << "\n"; // 0111

    // to print true or false instead of 0 or 1, use boolalpha
    std::cout << std::boolalpha;
    std::cout << a << b << c << d << "\n"; // falsetruetruetrue

    // to turn it back off, use noboolalpha
    std::cout << std::noboolalpha;
    std::cout << a << b << c << d << "\n";

    n = 0;
label:
    std::cout << n << " ";
    n++;
    if (n <= count)
        goto label;

    std::cout << "\n";
    // Learn about Data type modifiers: signed, unsigned, short, long
    // and Operators

    // Switch statement
    switch (n)
    {
    case 1:
        std::cout << "Value of n is 1\n";
        break;
    case 2:
        std::cout << "Value of n is 2\n";
        break;
    default:
        std::cout << "Your choice is other than 1, 2\n";
    }

    // Loops

    // for loop
    for (int i = 1; i <= 4; i++)
    {
        std::cout << i;
    }

    std::cout << "\n";

    // while loop
    i = 1;
    while (i < 5)
    {
        std::cout << i;
        i++;
    }

    std::cout << "\n";

    // do-while loop
    i = 1;
    do{
        if(i==3){
            i++;
            continue;
        }
        std::cout << 2*i;
        i++;
        if(i==7)
            break;
    }while (i < 8);
    

    std::cout << std::endl;
    return 0;
}