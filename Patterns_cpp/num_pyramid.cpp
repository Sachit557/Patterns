#include <iostream>

void num_pyramid(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    num_pyramid(a);

    return 0;
}

void num_pyramid(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << i << " ";
        }
        std::cout << '\n';
    }
}