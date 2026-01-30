#include <iostream>

void hollow_diamond_pattern(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    hollow_diamond_pattern(a);
    return 0;
}

void hollow_diamond_pattern(int a)
{
    int spaces = a - 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            std::cout << " ";
        }

        std::cout << '*';

        for (int k = 0; k < 2 * i - 1; k++)
            std::cout << " ";
        if (i != 0)
            std::cout << "*";

        // end part
        spaces--;
        std::cout << std::endl;
    }

    int b = a - 1;

    // rest loop here ( second loop)
}