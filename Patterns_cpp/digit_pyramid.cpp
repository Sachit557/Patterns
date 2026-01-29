#include <iostream>

void num_pyramid(int a);

int main()
{
    int a = 0;
    std::cin >> a;
    num_pyramid(a);
}

void num_pyramid(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << (char)('A' + i) << " ";
        }
        std::cout << '\n';
    }
}