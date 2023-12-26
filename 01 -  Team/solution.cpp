#include <iostream>

int main()
{
    int n, total = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
        {
            total++;
        }
    }

    std::cout << total << "\n";

    return 0;
}