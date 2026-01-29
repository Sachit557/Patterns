#include <iostream>

void star_pyramid(int a);

int main()
{
    int a = 0;
    std::cin >> a;
    star_pyramid(a);

    return 0;
}

void star_pyramid(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}