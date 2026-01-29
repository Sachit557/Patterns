#include <iostream>

void pyramid_pattern(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    pyramid_pattern(a);
    return 0;
}

void pyramid_pattern(int a)
{
    int space = a - 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= space - 1; j++)
        {
            std::cout << "  ";
        }
        space--;

        for (int k = 1; k <= i; k++)
            std::cout << k << ' ';

        for (int m = i - 1; m > 0; m--)
            std::cout << m << ' ';

        std::cout << std::endl;
    }
}