#include <iostream>

void floyd_triangle(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    floyd_triangle(a);

    return 0;
}

void floyd_triangle(int a)
{
    int k = 1;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << (char)(64 + k++) << ' ';
        }
        std::cout << '\n';
    }
}