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
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            std::cout << " " << "hello";
        }
        spaces--;

        std::cout << std::endl;
    }
}