#include <iostream>

void inverse_triangle(int a);

int main(void)
{
    int a = 0;
    std::cin >> a;
    inverse_triangle(a);
    return 0;
}

void inverse_triangle(int a)
{
    int b = 0;
    int k = 1;
    for (int i = a; i > 0; i--)
    {
        for (int m = 0; m < b; m++)
        {
            std::cout << ' ';
        }
        b++;

        for (int j = 1; j <= i; j++)
        {
            std::cout << k;
        }
        k++;
        std::cout << '\n';
    }
}