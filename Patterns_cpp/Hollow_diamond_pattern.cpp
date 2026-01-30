#include <iostream>

void hollow_diamond_pattern(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    hollow_diamond_pattern(a);
    return 0;
}

#include <iostream>

void hollow_diamond_pattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int s = 0; s < a - i - 1; s++)
            std::cout << " ";

        std::cout << "*";

        if (i > 0)
        {
            for (int s = 0; s < 2 * i - 1; s++)
                std::cout << " ";
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (int i = a - 2; i >= 0; i--)
    {
        for (int s = 0; s < a - i - 1; s++)
            std::cout << " ";

        std::cout << "*";

        if (i > 0)
        {
            for (int s = 0; s < 2 * i - 1; s++)
                std::cout << " ";
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}
