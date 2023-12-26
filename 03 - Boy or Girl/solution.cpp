#include <iostream>

int main()
{
    char username[101];
    std::cin.getline(username, sizeof(username));

    bool uniqueChars[26] = { false };
    int uniqueCount = 0;
    for (int i = 0; username[i] != '\0'; i++)
    {
        int index = username[i] - 'a';
        if (!uniqueChars[index])
        {
            uniqueChars[index] = true;
            uniqueCount++;
        }
    }

    if (uniqueCount % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}