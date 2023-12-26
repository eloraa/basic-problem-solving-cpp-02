#include <iostream>
#include <unordered_set>

int main()
{
    int additionalHorseshoes = 0;
    std::unordered_set<int> colors;

    for (int i = 0; i < 4; ++i)
    {
        int color;
        std::cin >> color;
        if (colors.count(color) > 0)
        {
            additionalHorseshoes++;
        }
        colors.insert(color);
    }

    std::cout << additionalHorseshoes << std::endl;

    return 0;
}