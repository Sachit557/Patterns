#include <iostream>

void pattern(int n);

int main()
{
    int a = 0;
    std::cin >> a;
    pattern(a);
    return 0;
}

void pattern(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << k++ << " ";
        }
        std::cout << '\n';
    }
}