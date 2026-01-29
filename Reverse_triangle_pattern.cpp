#include <iostream>

void reverse_triangle(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    reverse_triangle(a);

    return 0;
}

void reverse_triangle(int a)
{
    for (int i = 0; i < a + 1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            std::cout << j << " ";
        }
        std::cout << '\n';
    }
}