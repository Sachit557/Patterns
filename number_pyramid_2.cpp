#include <iostream>

void num_pyramid(int a);

int main()
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
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << '\n';
    }
}