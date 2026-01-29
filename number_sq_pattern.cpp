#include <iostream>

void pattern(int n);

int main()
{
    int a = 0;
    std::cin >> a;

    pattern(a);
}

void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << j << " ";
        }
        std::cout << '\n';
    }
}